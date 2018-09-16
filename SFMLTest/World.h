#pragma once
#include "Rock.h"
#include <ctime>
class World
{
public:
	World(int width, int height);
	~World();
	World();
	Rock r[500];
	void CreateWorld();
	void DestroyWorld();
private:
	
	int width;
	int height;

};

