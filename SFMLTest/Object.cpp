#include "Object.h"



Object::Object()
{
}

void Object::Destroy(Object o) 
{

	o.spr.setPosition(-100, -100);
	o.x = -100;
	o.y = -100;
	

}


Object::~Object()
{
}
