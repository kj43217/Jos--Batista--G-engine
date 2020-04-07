#include <SFML/Graphics.hpp>
#include "G-Engine/G-World.h"



	int main()
	{
		sf::RenderWindow window(sf::VideoMode(800, 600), "cajita"); //Creamos una ventana con dimensiones 800x600. 
		window.setFramerateLimit(30);

		sf::Event event; //Creamos un objeto tipo evento, llamado event. 
		sf::Clock clock; //Para llevar el tiempo que toma hacer un frame en el ciclo de window. 

		//Cargando sprites. 
		sf::Texture boxTex1;
		sf::Sprite boxSprite1;

		if (!boxTex1.loadFromFile("assets/box1.png"))
		{
			std::cout << "Tucajita no existe :(" << std::endl;
			system("pause");
		}

		//Configuramos nuestro mundo. 
		World w1;
		w1.setgravity(Vec2(0.0f, 900.0f));

		Body b1;
		b1.setMass(4.0f);
		b1.setpos(Vec2(320.0f, 0.0f));
		b1.setvel(Vec2(0.0f, 0.0f));

		w1.addBody(&b1);

		//Configurando sprites.

		boxSprite1.setTexture(boxTex1);
		boxSprite1.setScale(sf::Vector2f(0.10f, 0.10f));

		//Colocamos el origen del sprite en el centro del sprite. 
		sf::Rect<float> size = boxSprite1.getGlobalBounds();
		boxSprite1.setOrigin(sf::Vector2f(size.width / 25, size.height / 25));

		//Para ilustrar lo que queremos... colocaremos la cajita en el centro de la pantalla.
		//El sprite usa la misma posición inicial que se le da al cuerpo en la configuración de cuerpo.
		boxSprite1.setPosition(sf::Vector2f(b1.getPos().getx(), b1.getPos().gety()));


		//Lo que sucede en la pantalla...
		while (window.isOpen()) //Se mantiene el ciclo while mientras la ventana esté abierta. 
		{
			while (window.pollEvent(event)) //Lee si hubo alguna señal de entrada (mouse, teclado, joystick...) 
			{
				if (event.type == sf::Event::Closed) //Si el usuario presiona X (para salir de la ventana)...
				{
					window.close(); //... Cierra la ventana
				}
			}

			//Calculo el tiempo que toma hacer un frame.
			sf::Time elapsed = clock.restart();
			float dt = elapsed.asSeconds();

			//Uso el tiempo calculado para usar la función Step() de World w1.
			w1.Step(dt);

			boxSprite1.setPosition(sf::Vector2f(b1.getPos().getx(), b1.getPos().gety()));

			window.clear(sf::Color::Black);
			window.draw(boxSprite1);
			window.display();

			b1.Displayinfo();
		}

		return 0;
}