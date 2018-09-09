#include "World.h"


World::World(int width, int height)
{
	this->width = width;
	this->height = height;
	CreateWorld();

}

World::World() {
	
}

void World::CreateWorld() 
{
	srand(time(NULL));
	r = Rock(rand() % 500, rand() % 500);
	std::cout << r.x << std::endl << r.y << std::endl;
}

World::~World()
{
}
