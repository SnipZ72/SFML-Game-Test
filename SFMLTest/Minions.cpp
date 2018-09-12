#include "Minions.h"



Minions::Minions()
{
}

void Minions::DoJob() 
{
	GetClosestRock();
	if (currRock->pos.x > -1000 || currRock->pos.y > -1000) {
		targX = currRock->pos.x;
		targY = currRock->pos.y;
	}
	if (spr.getPosition().x > targX) {
		//spr.move(sf::Vector2f(-0.01f, 0));
		spr.setPosition(sf::Vector2f(spr.getPosition().x - speed, spr.getPosition().y));
	}
	if (spr.getPosition().x < targX) {
		//spr.move(sf::Vector2f(0.01f, 0));
		spr.setPosition(sf::Vector2f(spr.getPosition().x + speed, spr.getPosition().y));
	}
	if (spr.getPosition().y > targY) {
		//spr.move(sf::Vector2f(0, -0.01f));
		spr.setPosition(sf::Vector2f(spr.getPosition().x, spr.getPosition().y - speed));
	}
	if (spr.getPosition().y < targY) {
		//spr.move(sf::Vector2f(0, 0.01f));
		spr.setPosition(sf::Vector2f(spr.getPosition().x, spr.getPosition().y + speed));
	}
	if(Vec::Distance(spr.getPosition(), currRock->spr.getPosition()) < 1) {
		//minionWorld.currRock->Destroy();
		currRock->pos.x = -5000;
		currRock->pos.y = -5000;
		currRock->spr.setPosition(-5000, -5000);
		GetClosestRock();
	}
	
}

void Minions::GetClosestRock() {

	float lastDist = 9999999;
	for (int i = 0; i < sizeof(minionWorld.r) / sizeof(minionWorld.r[0]); i++) {

		if (lastDist > Vec::Distance(minionWorld.r[i].spr.getPosition(), spr.getPosition())) {
			 currRock = &minionWorld.r[i];
			lastDist = Vec::Distance(minionWorld.r[i].spr.getPosition(), spr.getPosition());
		}
	}
}

Minions::~Minions()
{
}

