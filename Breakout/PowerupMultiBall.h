#pragma once
#include "PowerupBase.h"
class PowerupMultiBall : public PowerupBase
{
public:
    PowerupMultiBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupMultiBall();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};

