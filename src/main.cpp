#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::Texture texture;
	if (!texture.loadFromFile("../assets/character.png"))
	{
		return EXIT_FAILURE;
	}
	sf::Sprite sprite(texture);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Black);

		window.draw(sprite);
		window.display();
	}

	return 0;
}