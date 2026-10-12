#include "padding.h"

Paddding::Paddding(float x, float y)
{
  height = 200;
  width = 30;
  posx = x;
  posy = y;
}

void Paddding::draw()
{
  DrawRectangle((posx == 0)? posx +10 :posx - (width + 10),posy - height/2,width,height,WHITE);
}

void Paddding::movedown()
{
  posy += 2;  
}

void Paddding::moveup()
{
  posy -= 2;
}
