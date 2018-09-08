#include "Minions.h"

int targX = 500;
int targY = 50;

Minions::Minions()
{
	if (!minionTexture.loadFromFile("minion.png")) {
		std::cout << "FAILED TO LOAD MINION png" << std::endl;
	}
	minionSprite.setTexture(minionTexture);
}

void Minions::doJob() 
{

	if (minionSprite.getPosition().x > targX) {
		minionSprite.move(sf::Vector2f(-0.01f, 0));
	}
	if (minionSprite.getPosition().x < targX) {
		minionSprite.move(sf::Vector2f(0.01f, 0));
	}
	if (minionSprite.getPosition().y > targY) {
		minionSprite.move(sf::Vector2f(0, -0.01f));
	}
	if (minionSprite.getPosition().y < targY) {
		minionSprite.move(sf::Vector2f(0, 0.01f));
	}

}


Minions::~Minions()
{
}
