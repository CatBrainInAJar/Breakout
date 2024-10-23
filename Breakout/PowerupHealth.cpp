#include "PowerupHealth.h"


PowerupHealth::PowerupHealth(sf::RenderWindow* window, Paddle* paddle, Ball* ball/*, GameManager gameManager*/)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(ballEffectsColour);
    //gameManager.addLife();
}

PowerupHealth::~PowerupHealth()
{
}

std::pair<POWERUPS, float> PowerupHealth::applyEffect()
{
    //_ball->setVelocity(2.f, 5.0f);
    _ball->setGiveLife(true);
    return { health, 5.0f };
}