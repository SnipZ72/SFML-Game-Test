#include "Camera.h"



Camera::Camera()
{
	view.reset(sf::FloatRect(200, 200, 300, 300));
}

void Camera::MoveCamera(sf::Vector2f pos, sf::Vector2u windowSize) {
	//view.reset(sf::FloatRect(pos, sf::Vector2f(200, 200)));

	view.setCenter(pos);
	view.setSize(windowSize.x, windowSize.y);
	view.setViewport(sf::FloatRect(0, 0, 1, 1));
	
	//dstd::cout << view.getCenter().x << std::endl;
}

Camera::~Camera()
{
}
