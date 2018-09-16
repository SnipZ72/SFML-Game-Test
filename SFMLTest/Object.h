#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Object
{
public:
	Object();
	~Object();
	void Destroy(Object *o);
	sf::Vector2f pos;
	sf::Sprite spr;
};

