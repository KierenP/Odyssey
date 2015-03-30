#pragma once

using namespace::std;

#include "Entity.h"

class Ship :
	public Entity
{
public:
	Ship();
	~Ship();
	void Accelerate();
	void Turn(bool direction); //false = left, true = right

	float thrust;
	float direction;
	float turnSpeed;

};

