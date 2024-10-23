# Breakout

W Kavanagh. June Summer 2024

## controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

## Suggested fixes

* Fix the compiler issues in the code

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* GameLoop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball [where you shoot the ball from the paddle every time], tiny ball, big ball, brick-tracking ball)
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as LLama

# Time Details and Changelist
<Add information to this section about the time you've taken for this task along with a professional changelist.

fixed bug took around about 30 minutes of looking but couldn't find more than 1, removed the include causing issues in powerupBase.h
added a life buff to the game, took a lot longer then initialy thought as I encountered some problems - including updating the ui when life was given causing the game to crash, sadly couldn't fix it. this took 1 hr and 30 minutes on and off

added a ball enlarge and a small ball "power-up" (these are 2 separate classes), this took 40 minutes

attempted multi-ball power-up, this took 30 minutes



>
