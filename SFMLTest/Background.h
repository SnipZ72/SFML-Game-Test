#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Background
{
public:
	Background();
	void rainbow();
	void randomColour();
	sf::Sprite backgroundSprite;
	~Background();
};

