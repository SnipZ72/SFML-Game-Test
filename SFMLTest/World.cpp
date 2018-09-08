#include "World.h"


World::World(int width, int height)
{
	this->width = width;
	this->height = height;
	CreateWorld();

}

void World::CreateWorld() 
{
	r = Rock(100, 50);

}

World::~World()
{
}
