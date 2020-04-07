#include "G-Math.h"

struct Body
{
	//Constructores
	Body() : mass(1.0f) {}
	Body(float mass) : mass(mass) {}

	//establecer el valor de la masa
	void setMass(float m);
	//establecer posicion y velocidad
	void setvel(Vec2 v);
	void setpos(Vec2 v);
	//establecer posicion y velocidad
	float getMass();
	Vec2 getVel();
	Vec2 getPos();

	//mostrar informacion del cuerpo
	void Displayinfo();

		//aplicacion de fuerza
		void Addforce();


private:

	float mass;
	float InvMass = 1 / mass;
	Vec2 position;
	Vec2 velocity;
	Vec2 force;
};
