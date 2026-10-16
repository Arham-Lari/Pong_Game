#pragma once
#include "raylib.h"

class Paddding {
  
  public:
    Paddding(float x, float y);
    void draw();
    void movedown();
    void moveup();
    int height ,width;
    float posx ,posy;

  private:

};
