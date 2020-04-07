#include <iostream>
#include <math.h>
#include <vector>

struct Vec2
{
	// definir constructores
	Vec2() :  x(0.0f),  y(0.0f) {}// constructor default
	Vec2(float x, float y) : x(x), y(y) {}

	//asignar valores a las componentes del vector.
	void set(float x_, float y_);

		//propiedades del vector
		float Length();
	float LengthSquared();
	void Display();

	//obtener componentes del vector.
	float getx();
	float gety();


	//operaciones con vectores
	void operator += (Vec2 v);
	void operator -= (Vec2 v);
	float Dot(Vec2 a, Vec2 b);
	float Cross(Vec2 a, Vec2 b);

private: 
	float x;
	float y;
};
