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
	std::cout << sizeof(r) / sizeof(r[0]) << std::endl;
	for (int i = 0; i < sizeof(r) / sizeof(r[0]); i++) {
		r[i] = Rock(rand() % 1000, rand() % 1000);
	}
}

World::~World()
{
}
