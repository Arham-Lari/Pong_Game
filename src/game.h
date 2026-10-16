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
     int score1();
     int score2();

   private:
     int player1;
     int player2;
     void cheackCollision();
     void touchedTheWall();
     Paddding pad1;
     Paddding pad2;
     void rePositionBall();
     Ball ball;
   
};
