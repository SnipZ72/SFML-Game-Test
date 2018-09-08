#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Rock
{
public:
	Rock();
	Rock(int x, int y);
	~Rock();
	sf::Sprite rockSprite;
private:
	sf::Texture rockTexture;
	
};

