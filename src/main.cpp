#include "ball.h"
#include"raylib.h"


int main(int argc, const char** argv){
  
  const int screen_width = 1200;
  const int screen_height = 800;
  const int  padding_hight = 100;
  const int padding_width = 20;
  
  //create the ball with custom made class
  Ball ball;
  ball.x = screen_width/2;
  ball.y = screen_height/2;
 
  InitWindow(screen_width,screen_height,"Pong_Game");
  SetTargetFPS(60);
  
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(GREEN);
    //drawn the line at center of the screen
    DrawLine(screen_width/2,0,screen_width/2,screen_height,WHITE); 
    ball.update();
   //drawing ball  
    ball.draw();
    ball.update();
    //added the padding
    DrawRectangle(10,screen_height/2-padding_hight/2,padding_width,padding_hight,WHITE);
    DrawRectangle(screen_width -(padding_width+10), screen_height/2 - padding_hight/2, padding_width, padding_hight,WHITE);
    EndDrawing();
  }

  CloseWindow();
  return 0;
  
}