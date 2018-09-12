#include "Background.h"
#include <stdint.h>

sf::Texture texture;
sf::Image image;
Background::Background()
{
	image.create(255, 255);
	texture.create(255, 255);
	randomColour();

}
void Background::randomColour() {
	for (int i = 0; i < 255; i++)
	{
		for (int j = 0; j < 255; j++)
		{
			//for (int k = 0; k < 255; k++)
			//{
				//image.setPixel(i, j, sf::Color(i, j, i-j));
				image.setPixel(i, j, sf::Color(0,127,14));
			//}
			
		}
	}

	texture.update(image);
	texture.setSmooth(true);
	//image.saveToFile("test.png");
	//texture.loadFromFile("test.png");
	backgroundSprite.setTexture(texture);
	backgroundSprite.setPosition(-500, -500);
	backgroundSprite.setScale(10, 10);
	


}

Background::~Background()
{
}
