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

bool Ball::collisionx(float x1 , int width)
{
    //checking for collision in x axis
    if( x + radius >= x1 && x - radius <= x1+width)
    {
        return true;
     }
    return false;
}

bool Ball::collisionY(float y1, int hight)
{
    //checking for collision in y axis
    if(y + radius >= y1 && y - radius <= y1+ hight )
    {
        return true;
    }
    return false;
}



