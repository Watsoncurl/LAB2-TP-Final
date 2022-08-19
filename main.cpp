#include <SFML/Graphics.hpp>

#include "Tanque.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    window.setFramerateLimit(60);

    Tanque player;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

//        INPUT

//        LOGIC

//        UPDATE
        player.update();

//        RENDER
        window.clear();

        window.draw(player);

        window.display();
    }

    return 0;
}
