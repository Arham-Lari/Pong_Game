#include <iostream>
#include "padding.h"
#include "ball.h"
#include"raylib.h"


int main(int argc, const char** argv){
  
  //setting the dimension of game window
  const int screen_width = 1200;
  const int screen_height = 800;
  
  //create the ball with custom made class
  Ball ball;
  ball.x = screen_width/2;
  ball.y = screen_height/2;
  
  //creating paddings
  Paddding pad1 = Paddding( 0, screen_height/2) ;
  Paddding pad2 = Paddding (screen_width ,screen_height/2);
 
  //creating the game window
  InitWindow(screen_width,screen_height,"Pong_Game");
  
  //set fps of game
  SetTargetFPS(60);
  
  
  //opening the game loop
  while (!WindowShouldClose())
  {
    //begin drawing
    BeginDrawing();
    
    //applying the background colour
    ClearBackground(GREEN);

    //drawn the line at center of the screen
    DrawLine(screen_width/2,0,screen_width/2,screen_height,WHITE); 

   //drawing ball  
    ball.draw();

    //moving the ball
    ball.update();

    //updating ball position and checking its x and y for collision
    ball.update();

    //added the padding
    pad1.draw();
    pad2.draw();
    
    int input = GetKeyPressed();
   if(input == KEY_DOWN){
     std::cout<<"the down key is pressed"<<std::endl;
    pad1.movedown();
   } 
    //endling the drawing 
    EndDrawing();
  }

  //closing the game window
  CloseWindow();
  return 0;
  
}