#include "Tanque.h"

Tanque::Tanque()
{
    _velocity = {0,0};
    _texture.loadFromFile("Sprites/tank.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height / 2);
    _sprite.setPosition(400,300);
}

void Tanque::update()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        _velocity.y = -4;
        _sprite.setRotation(0);
    }

    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        _velocity.y =  4;
        _sprite.setRotation(180);
    }

    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        _velocity.x =  4;
        _sprite.setRotation(90);
    }

    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        _velocity.x = -4;
        _sprite.setRotation(-90);
    }

    else _velocity = {0,0};

    _sprite.move(_velocity);

//        LOGIC
    if(_sprite.getPosition().x < 0 + _sprite.getGlobalBounds().width / 2) _sprite.setPosition(0 + _sprite.getGlobalBounds().width / 2, _sprite.getPosition().y);
    if(_sprite.getPosition().x + _sprite.getGlobalBounds().width > 800 + _sprite.getGlobalBounds().width / 2) _sprite.setPosition(700 + _sprite.getGlobalBounds().width / 2, _sprite.getPosition().y);
    if(_sprite.getPosition().y < 0 + _sprite.getGlobalBounds().height / 2) _sprite.setPosition(_sprite.getPosition().x, 0 + _sprite.getGlobalBounds().height / 2);
    if(_sprite.getPosition().y + _sprite.getGlobalBounds().height > 600 + _sprite.getGlobalBounds().height / 2) _sprite.setPosition(_sprite.getPosition().x, 500 + _sprite.getGlobalBounds().height / 2);

}

void Tanque::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_sprite, states);
}
