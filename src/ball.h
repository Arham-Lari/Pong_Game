#pragma once
#include <math.h>
#include "raylib.h"

class Ball
{
    public:
        Ball();
        void draw();
        void update();
        bool collisionx (float, int);
        bool collisionY(float, int);
        float x;
        float y;
        int radius;
        void onCollision(int x, int y);

    private:
        int speedx;
        int speedy;
};
