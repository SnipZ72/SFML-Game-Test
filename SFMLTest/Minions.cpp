#include "Minions.h"



Minions::Minions()
{
	if (!minionTexture.loadFromFile("minion.png")) {
		std::cout << "FAILED TO LOAD MINION png" << std::endl;
	}
	spr.setTexture(minionTexture);
}

void Minions::doJob() 
{
	targX = minionWorld.r.x;
	targY = minionWorld.r.y;
	//FIX: DONT USE MOVE() USE SETPOSIITION()
	if (spr.getPosition().x > targX) {
		//spr.move(sf::Vector2f(-0.01f, 0));
		spr.setPosition(sf::Vector2f(spr.getPosition().x - 0.01f, spr.getPosition().y));
	}
	if (spr.getPosition().x < targX) {
		//spr.move(sf::Vector2f(0.01f, 0));
		spr.setPosition(sf::Vector2f(spr.getPosition().x + 0.01f, spr.getPosition().y));
	}
	if (spr.getPosition().y > targY) {
		//spr.move(sf::Vector2f(0, -0.01f));
		spr.setPosition(sf::Vector2f(spr.getPosition().x, spr.getPosition().y - 0.01f));
	}
	if (spr.getPosition().y < targY) {
		//spr.move(sf::Vector2f(0, 0.01f));
		spr.setPosition(sf::Vector2f(spr.getPosition().x, spr.getPosition().y + 0.01f));
	}
	if(Vec::Distance(spr.getPosition(), minionWorld.r.spr.getPosition()) < 2) {
		Destroy(minionWorld.r);
		//std::cout << minionWorld.r.x << std::endl;
	}

}


Minions::~Minions()
{
}
