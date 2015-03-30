#include "Ship.h"


Ship::Ship()
{
}


Ship::~Ship()
{

}

void Ship::Turn(bool direction)
{
	if (direction)
		direction += turnSpeed;
	else
		direction -= turnSpeed;
}

void Ship::Accelerate()
{
	float theta = 90 + direction;

	vx += cos(theta * 3.14159 / 180);
	vy -= sin(theta * 3.14159 / 180);
}



