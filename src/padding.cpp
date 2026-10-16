#include "padding.h"
#include <raylib.h>

Paddding::Paddding(float x, float y)
{
  height = 200;
  width = 30;
  posx = x;
  posy = y;
}
void Paddding::draw()
{
  DrawRectangle( (posx == 0)? posx +10 :posx - (width + 10),posy-height/2.0f,width,height,WHITE);
}

void Paddding::movedown()
{
    if(posy + (height/2.0f) >= GetScreenHeight()) return;
    posy += 5;  
}

void Paddding::moveup()
{
    if(posy - (height/2.0f) <= 0) return ; 
    posy -= 5;  
}
