#include "G-Body.h"

void Body::setMass(float m)
{
	mass = m;
}

void Body::setvel(Vec2 v)
{
	velocity = v;
}

void Body::setpos(Vec2 v)
{
	position = v;
}

float Body::getMass()
{
	return mass;
}

Vec2 Body::getVel()
{
	return velocity;
}

Vec2 Body::getPos()
{
	return position;
}

void Body::Displayinfo()
{
	std::cout << "m: " << mass << std::endl;
	std::cout << "s: ", position.Display();
	std::cout << "v: ", velocity.Display();
}

void Body::Addforce()
{

}
