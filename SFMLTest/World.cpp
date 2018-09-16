#include "World.h"


World::World(int width, int height)
{
	this->width = width;
	this->height = height;
	CreateWorld();

}

World::World() {} // Empty constructor

void World::DestroyWorld() {
	srand(time(NULL));
	for (int i = 0; i < sizeof(r) / sizeof(r[0]); i++) {
		//r[i] = Rock(rand() % 1000, rand() % 1000);
		r[i].pos = sf::Vector2f(rand() % 1000, rand() % 1000);
		r[i].spr.setPosition(r[i].pos);
	}
}
void World::CreateWorld() 
{
	srand(time(NULL));
	for (int i = 0; i < sizeof(r) / sizeof(r[0]); i++) {
		r[i] = Rock(rand() % 1000, rand() % 1000);
	}
}

World::~World()
{
}
