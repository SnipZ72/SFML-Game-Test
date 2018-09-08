#pragma once
#include "Rock.h"
class World
{
public:
	World(int width, int height);
	~World();
	Rock r;
private:
	void CreateWorld();
	int width;
	int height;

};

