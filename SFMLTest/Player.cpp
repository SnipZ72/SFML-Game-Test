#include "Player.h"

Player::Player()
{

	if (!texture.loadFromFile("player.png")) {
		std::cout << "Player failed to get PNG of Player.png" << std::endl;
	}
	texture.setSmooth(false);
	texture.setRepeated(false);
	playerSprite.setTexture(texture);
	playerSprite.setPosition(10, 50);

}

void Player::Move() {

	playerSprite.move(pos.x, pos.y);
}

Player::~Player()
{
}
