#include "ball.h"

Ball::Ball()
{
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
  
  if(x + radius >= GetScreenWidth() || x - radius  <= 0)
  {
    onCollision(-1,1);
  }
  if(y + radius  >= GetScreenHeight() || y - radius  <= 0)
  {
    onCollision(1,-1);
  }
}

void Ball::onCollision(int x,int y){
  speedx = x*speedx;
  speedy = y*speedy;
}