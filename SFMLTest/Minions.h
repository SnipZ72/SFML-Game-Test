#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Minions
{
enum jobs {
		destory,
		build
};
public:
	Minions();
	~Minions();
	void doJob();
	sf::Sprite minionSprite;
private:
	int speed;
	int health;
	sf::Texture minionTexture;
	
	
};

