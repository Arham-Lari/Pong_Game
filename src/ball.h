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
  bool collisionx (float, float);
  bool collisionY(float, float);

private:
  int speedx;
  int speedy;
  int radius;
  void onCollision(int x, int y);
};
