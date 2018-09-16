#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

class Game
{
public:
	Game();
	~Game();
	void Update();
	void HandleEvents();
};

