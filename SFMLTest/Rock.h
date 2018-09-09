#pragma once
#include "Object.h"
class Rock: public Object
{
public:
	Rock();
	Rock(int x, int y);
	~Rock();
private:
	sf::Texture rockTexture;
	
};

