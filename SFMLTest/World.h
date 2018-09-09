#pragma once
#include "Rock.h"
#include <ctime>
class World
{
public:
	World(int width, int height);
	~World();
	World();
	Rock r;
private:
	void CreateWorld();
	int width;
	int height;

};

