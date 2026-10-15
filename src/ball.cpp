#include "ball.h"
#include <raylib.h>

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
  
  //vertical collision check
  if(collisionY(GetScreenHeight(), 0))
  {
    onCollision(1,-1);
  }

  //horizontal collision check
  if(collisionx(GetScreenWidth(),0))
  {
    onCollision(-1,1);
  }
}


void Ball::onCollision(int x,int y){
    //feedback on collision
  speedx*= x;
  speedy*= y;
}

bool Ball::collisionx(float x1 , float x2)
{
    //checking for collision in x axis
    if( this->x + radius >= x1 || this->x - radius <= x2)
    {
        return true;
    }
    return false;
}

bool Ball::collisionY(float y1, float y2)
{
    //checking for collision in y axis
    if(this->y + radius >= y1 || this->y - radius <= y2 )
    {
        return true;
    }
    return false;
}



