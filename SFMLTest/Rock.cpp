#include "Rock.h"



Rock::Rock(int x, int y)
{
	this->pos.x = x;
	this->pos.y = y;
	spr.setPosition(pos.x, pos.y);

}

Rock::Rock() {

}

Rock::~Rock()
{
}
