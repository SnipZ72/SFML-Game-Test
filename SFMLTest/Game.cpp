#include "Game.h"
#include "Player.h"
#include "Background.h"
#include "Minions.h"
#include "World.h"
#include "Camera.h"

sf::RenderWindow window;
Player p;
Background b;
Minions m;
Camera c;
World w(200,200);
float speed = 0.1f;
sf::Texture spriteSheetTexture;

Game::Game()
{
	window.create(sf::VideoMode(800, 600), "Test Window");
	
	m.minionWorld = w;
	if (!spriteSheetTexture.loadFromFile("Spritesheet.png")) {
		std::cout << "Failed to load spritesheet" << std::endl;
	}
	m.spr.setTexture(spriteSheetTexture);
	m.spr.setTextureRect(sf::IntRect(0,0,32,32));
	for (int i = 0; i < sizeof(m.minionWorld.r) / sizeof(m.minionWorld.r[0]); i++) {
		m.minionWorld.r[i].spr.setTexture(spriteSheetTexture);
		m.minionWorld.r[i].spr.setTextureRect(sf::IntRect(33, 0, 32, 32));
	}

	
}

void Game::Update()
{
	
	while (window.isOpen()) {
		window.clear();
		HandleEvents();

		p.Move();
		m.DoJob();
		c.MoveCamera(p.playerSprite.getPosition(), sf::Vector2u(window.getSize().x *2, window.getSize().y * 2));
		window.setView(c.view);
		window.draw(b.backgroundSprite);
		for (int i = 0; i < sizeof(m.minionWorld.r) / sizeof(m.minionWorld.r[0]); i++) {
			if(w.r[i].pos.x > -1000 && w.r[i].pos.y > -1000)
				window.draw(m.minionWorld.r[i].spr);
		}
		//window.draw(m.currRock.spr);
		window.draw(m.spr);
		window.display();
	}
}
void Game::HandleEvents() 
{
	sf::Event event;

	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
		}
	}
	//Move the camera with mouse, maybe implement with minimap
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		p.playerSprite.setPosition(sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y));
		//std::cout << "Mouse Click(Left)" << std::endl;
	}
	//p.pos = sf::Vector2f(0, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		p.playerSprite.move(sf::Vector2f(-speed, 0));
		//std::cout << "Arrow Key Click(Left)" << std::endl;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		p.playerSprite.move(sf::Vector2f(speed, 0));
		//std::cout << "Arrow Key Click(Right)" << std::endl;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		p.playerSprite.move(sf::Vector2f(0,-speed));
		//std::cout << "Arrow Key Click(Up)" << std::endl;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		p.playerSprite.move(sf::Vector2f(0, speed));
		//std::cout << "Arrow Key Click(Down)" << std::endl;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {
		w.DestroyWorld();
		m.spr.setPosition(10, 50);
	}
}
Game::~Game()
{
}
