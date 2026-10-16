#pragma once
#include <math.h>
#include "raylib.h"

class Ball
{
    public:
        Ball();
        void draw();
        void update();
        float x;
        float y;
        int radius;
        void onCollision(int x, int y);
        int speedx;
        int speedy;
};
