#pragma once
#include <SFML/Graphics.hpp>


class GameManager;  // forward declaration



class Ball {
public:
    Ball(sf::RenderWindow* window, float velocity, GameManager* gameManager);
    ~Ball();
    void update(float dt);
    void render();
    void setVelocity(float coeff, float duration);
    void setFireBall(float duration);
    void setSize(float sizeMulti, float duration);
    void setGiveLife(bool life);
    void set_multiActive();

private:
    sf::CircleShape _sprite;
    sf::Vector2f _direction;
    sf::RenderWindow* _window;
    float _velocity;
    bool _givelife;
    bool _multiActive;
    bool _isAlive;
    bool _isFireBall;
    bool _isDefualtSize;
    float _timeWithPowerupEffect;
    float sizeMultiplier;

    GameManager* _gameManager;  // Reference to the GameManager


    static constexpr float RADIUS = 10.0f;      
    static constexpr float VELOCITY = 350.0f;   // for reference.
};

