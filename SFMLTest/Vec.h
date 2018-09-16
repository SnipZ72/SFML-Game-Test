#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Vec
{
public:
	Vec();
	~Vec();
	static float Distance(sf::Vector2f a, sf::Vector2f b);
private:
	float PythagH(float a, float b);
	float PythagL(float a, float c);
};

