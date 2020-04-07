#include "G-Math.h"

void Vec2::set(float x_, float y_)
{
	x = x_;
	y = y_;
}
// calculando algunas propiedades del vector
float Vec2::Length()
{
	return sqrt(x*x + y * y);
}

float Vec2::LengthSquared()
{
	return x*x + y*y;
}
//mostrar el vector
void Vec2::Display()
{
	std::cout << "el vector es: (" << x << " ," << y << " )" << std::endl;
}
//obteniendo las componentes del vector
float Vec2::getx()
{
	return x;
}

float Vec2::gety()
{
	return y;
}
//Operaciones de vectores
void Vec2::operator+=(Vec2 v)
{
	x += v.x;
	y += v.y;
}

void Vec2::operator-=(Vec2 v)
{
	
	x -= v.x;
	y -= v.y;
}

float Vec2::Dot(Vec2 a, Vec2 b)
{
	return a.x * b.x +a.y * b.y ;
}

float Vec2::Cross(Vec2 a, Vec2 b)
{
	return a.x * b.y - a.y * b.x ;
}

