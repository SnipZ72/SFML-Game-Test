#pragma once
#include "Object.h"
#include "World.h"
#include "Vec.h"
class Minions: public Object
{
enum jobs {
		destory,
		build
};
public:
	Minions();
	~Minions();
	void doJob();
	World minionWorld = World();
private:
	int targX = 500;
	int targY = 50;
	int speed;
	int health;
	sf::Texture minionTexture;
	
	
};

