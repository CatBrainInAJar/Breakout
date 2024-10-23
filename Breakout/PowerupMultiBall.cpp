#include "PowerupMultiBall.h"

PowerupMultiBall::PowerupMultiBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupMultiBall::~PowerupMultiBall()
{
}

std::pair<POWERUPS, float> PowerupMultiBall::applyEffect()
{
    _ball->set_multiActive();
    return { multiBall, 5.0f };
}