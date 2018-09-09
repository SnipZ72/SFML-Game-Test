#include "Vec.h"
#include<cmath>


Vec::Vec()
{
}


float Vec::PythagH(float a, float b) {

	return sqrt(pow(a, 2) + pow(b, 2));

}
float Vec::PythagL(float a, float c) {

	return 0;
}

float Vec::Distance(sf::Vector2f a, sf::Vector2f b) 
{

	float xDist = std::abs(a.x - b.x);
	float yDist = std::abs(a.y - b.y);

	return sqrt(pow(xDist, 2) + pow(yDist, 2));;

}


Vec::~Vec()
{
}
