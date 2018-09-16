#include "Object.h"



Object::Object()
{
}

void Object::Destroy(Object *o) 
{
	o->pos = sf::Vector2f(-5000,-5000);
	o->spr.setPosition(o->pos.x, o->pos.y);
}


Object::~Object()
{
	
}
