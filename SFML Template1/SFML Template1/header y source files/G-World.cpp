#include "G-World.h"
//
void World::setgravity(Vec2 v)
{
	gravity = v;
}

void World::addBody(Body* b)
{
	bodies.push_back(b); //Va agregando elementos al vector bodies. 
}

void World::Step(float dt) //LA PARTE MÁS IMPORTANTE DE TODO.
{

	if ((int)bodies.size() == 0) { std::cout << "NO BODIES FOUND IN THIS WORLD." << std::endl; system("pause"); }

	float ax = gravity.getx(); //Por ahora, la única aceleración que existe es debido a la gravedad. 
	float ay = gravity.gety();

	for (int i = 0; i < (int)bodies.size(); i++) //Iterando sobre el vector "bodies". 
	{
		float sx = bodies[i]->getPos().getx(); //Posición en x del cuerpo en bodies[i]
		float sy = bodies[i]->getPos().gety(); //Posición en y del cuerpo en bodies[i]

		float vx = bodies[i]->getVel().getx(); //Velocidad en x del cuerpo en bodies[i]
		float vy = bodies[i]->getVel().gety(); //Velocidad en y del cuerpo en bodies[i]

		bodies[i]->setpos(Vec2(sx + vx * dt, sy + vy * dt)); //Modificando la posición del cuerpo usando la aproximación de Euler.
		bodies[i]->setvel(Vec2(ax * dt + vx, ay * dt + vy)); //Modificando la velocidad del cuerpo usando la aproximación de Euler.
	}
}