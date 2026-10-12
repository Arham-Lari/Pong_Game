#include"raylib.h"

const Vector2 widowDim = {800,400};

int main(int argc, const char** argv){
  InitWindow(widowDim.x,widowDim.y,"PongGame");
  SetTargetFPS(60);
  
  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(GREEN);
    EndDrawing();
  }

  CloseWindow();
  return 0;
  
}