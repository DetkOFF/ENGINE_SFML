//
// Created by maxde on 05.06.2024.
//

#include "Object.h"

Object::Object(sf::Vector2f pos, sf::Vector2f scale, const sf::Texture &texture): position_(pos), scale_(scale), sprite_(sf::Sprite(texture)){
    sprite_.setPosition(position_);
    sprite_.setScale(scale_);
}

Object::~Object() = default;

sf::Vector2f Object::pos() {
    return position_;
}

void Object::pos(sf::Vector2f &newPos) {
    position_ = newPos;
    sprite_.setPosition(position_);
}

void Object::Draw(sf::RenderWindow &window) {
    window.draw(sprite_);
}
