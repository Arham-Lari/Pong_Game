#include "ball.h"
#include <raylib.h>

Ball::Ball()
{
  x = (float) GetScreenWidth()/2;
  y = (float)GetScreenHeight()/2;
  radius = 30; speedx = 2;
  speedy =2;
}

void Ball::draw()
{
  DrawCircle(x,y,radius,WHITE);
}

void Ball::update()
{
    x += speedx;
    y += speedy;
}


void Ball::onCollision(int x,int y){
    //feedback on collision
  speedx*= x;
  speedy*= y;
}

