#include "PowerupSmallBall.h"
PowerupSmallBall::PowerupSmallBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupSmallBall::~PowerupSmallBall()
{
}

std::pair<POWERUPS, float> PowerupSmallBall::applyEffect()
{
    // _ball->setVelocity(2.f, 5.0f);
    _ball->setSize(0.2f, 5.0f);
    return { smallBall, 5.0f };
}