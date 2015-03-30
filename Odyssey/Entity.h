#pragma once
#include <SFML\Graphics.hpp>

class Entity
{
public:
	Entity();
	~Entity();
	void Update();

	float x, y;    //Position on the x axis and y axis relitive to the world
	float vx, vy;  //Velocity x and y
	sf::Sprite objectSprite;

};

