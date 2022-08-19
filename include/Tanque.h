#ifndef TANQUE_H
#define TANQUE_H

#include <SFML/Graphics.hpp>

class Tanque: public sf::Drawable
{
    sf::Sprite _sprite;
    sf::Texture _texture;
    sf::Vector2f _velocity;
public:
    Tanque();
    void update();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

#endif // TANQUE_H
