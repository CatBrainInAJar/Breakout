#pragma once
#include "PowerupBase.h"
//#include "GameManager.h"

class PowerupHealth : public PowerupBase
{
public:
    PowerupHealth(sf::RenderWindow* window, Paddle* paddle, Ball* ball/*GameManager gameManager*/);
    ~PowerupHealth();

    //GameManager gameManager;

    std::pair<POWERUPS, float> applyEffect() override; //apply power-up effect


};

