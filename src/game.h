#pragma once 
#include "ball.h"
#include "padding.h"
#include "raylib.h"

class Game
{
   public:
     Game();
     void draw();
     void update();
     void movement();

   private:
     void cheackCollision();
     Paddding pad1;
     Paddding pad2;
     Ball ball;
   
};
