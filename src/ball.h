#pragma once
#include <math.h>
#include "raylib.h"

class Ball
{
public:
  Ball();
  float x;
  float y;
  void draw();
  void update();

private:
  int speedx;
  int speedy;
  int radius;
  void onCollision(int x, int y);
};