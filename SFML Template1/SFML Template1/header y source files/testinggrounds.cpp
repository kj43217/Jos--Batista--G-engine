#include "G-World.h"

int main() {

	World w1;

	Body b1;

	b1.setMass(2.5f);
	b1.setpos(Vec2(0.0f, 0.0f));
	b1.setvel(Vec2(0.0f, 0.0f));


	w1.addBody(b1);

	for (int i = 0; i < 10; i++)
	{
		w1.Step(1.0f);

		b1.Displayinfo();
	}
}