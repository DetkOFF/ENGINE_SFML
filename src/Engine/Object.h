//
// Created by maxde on 05.06.2024.
//

#ifndef CMAKESFMLPROJECT_OBJECT_H
#define CMAKESFMLPROJECT_OBJECT_H

#include <SFML/Graphics.hpp>

class Object {
private:
    sf::Vector2f position_;
    sf::Vector2f scale_;
    sf::Sprite sprite_;
public:
    Object(sf::Vector2f pos, sf::Vector2f scale, const sf::Texture &texture);
    ~Object();
    sf::Vector2f pos();
    void pos(sf::Vector2f& newPos);
    void Draw(sf::RenderWindow &window);
};


#endif //CMAKESFMLPROJECT_OBJECT_H
