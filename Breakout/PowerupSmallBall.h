#pragma once
#include "PowerupBase.h"
class PowerupSmallBall : public PowerupBase
{
public:
    PowerupSmallBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupSmallBall();

    std::pair<POWERUPS, float> applyEffect() override; //apply power-up effect
};

