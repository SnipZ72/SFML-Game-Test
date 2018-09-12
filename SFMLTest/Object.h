#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Object
{
public:
	Object();
	~Object();
	void Destroy();
	sf::Vector2f pos;
	sf::Sprite spr;
};

