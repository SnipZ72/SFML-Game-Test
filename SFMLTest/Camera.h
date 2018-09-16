#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Camera
{
public:
	Camera();
	~Camera();
	sf::View view;
	void MoveCamera(sf::Vector2f pos, sf::Vector2u windowSize);
};

