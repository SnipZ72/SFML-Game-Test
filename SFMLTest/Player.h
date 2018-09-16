#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Player
{
public:
	Player();
	~Player();
	void Move();
	sf::Vector2f pos = sf::Vector2f(0,0);
	sf::Vector2f vel = sf::Vector2f(10,50);
	sf::Texture texture;
	sf::Sprite playerSprite;
};

