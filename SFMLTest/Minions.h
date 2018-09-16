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
	void DoJob();
	World minionWorld = World();
private:
	int targX = 500;
	int targY = 50;
	float speed = 0.5f;
	int health;
	sf::Texture minionTexture;
	Rock *currRock;
	void GetClosestRock();
	
	
};

