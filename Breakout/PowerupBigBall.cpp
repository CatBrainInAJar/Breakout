#include "PowerupBigBall.h"

PowerupBigBall::PowerupBigBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupBigBall::~PowerupBigBall()
{
}

std::pair<POWERUPS, float> PowerupBigBall::applyEffect()
{
   // _ball->setVelocity(2.f, 5.0f);
    _ball->setSize(2.f, 5.0f);
    return { bigBall, 5.0f };
}