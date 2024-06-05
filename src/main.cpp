#include <SFML/Graphics.hpp>
#include "Engine/Object.h"
int main()
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(144);

//    sf::CircleShape shape(50.f);
//    shape.setFillColor(sf::Color(255,255,0));

    sf::Texture goblin_texture;
    if (!goblin_texture.loadFromFile("res/goblin.png")){
        // error...
    }

    Object goblin(*new sf::Vector2f(400.f, 400.f), *new sf::Vector2f(4.f,4.f), goblin_texture);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        ///draw frame here

//        window.draw(shape);
//        window.draw(goblin_sprite);
        sf::Vector2f deltaVector(2.f,0.f);
        sf::Vector2f newPos = goblin.pos()+deltaVector;
        goblin.pos(newPos);
        goblin.Draw(window);

        window.display();
    }
}
