#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Black);
		// window.draw(shape);
		sf::RectangleShape rectangle(sf::Vector2f(128.0f, 128.0f));
		rectangle.setFillColor(sf::Color::Red);
		rectangle.setPosition(320, 240);
		window.display();
	}

	return 0;
}