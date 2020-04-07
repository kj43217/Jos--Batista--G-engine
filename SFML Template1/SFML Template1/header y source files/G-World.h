#include "G-Body.h"

struct World
{
//constructores de world
	World() : gravity(Vec2(0.0f,900.00f)) {}
	World(Vec2 gravity) :gravity(gravity) {}

	//establecer gravedad
	void setgravity(Vec2 v);

	//body creation
	void addBody(Body* b);

	//simulation
	void Step(float dt);


private:
	Vec2 gravity;
	std::vector<Body*> bodies;
};
