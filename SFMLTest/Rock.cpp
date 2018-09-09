#include "Rock.h"



Rock::Rock(int x, int y)
{
	this->x = x;
	this->y = y;
	spr.setPosition(x, y);

}

Rock::Rock() {

}

Rock::~Rock()
{
}
