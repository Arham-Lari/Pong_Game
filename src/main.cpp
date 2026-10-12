#include"raylib.h"


int main(int argc, const char** argv){
  
  const int screen_width = 1200;
  const int screen_height = 800;
  
  InitWindow(screen_width,screen_height,"Pong_Game");
  SetTargetFPS(60);
  
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(GREEN);
    DrawCircle(screen_width/2,screen_height/2,30,WHITE);
    EndDrawing();
  }

  CloseWindow();
  return 0;
  
}