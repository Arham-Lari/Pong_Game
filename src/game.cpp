#include "game.h"
#include <raylib.h>

Game::Game()
    :ball(),
    pad1(0,GetScreenHeight()/2.0f),
    pad2(GetScreenWidth(),GetScreenHeight()/2.0f)
{
}

void Game::draw()
{
    ball.draw();
    pad1.draw();
    pad2.draw();
}

void Game::update()
{

    //vertical collision check
    if(ball.y + ball.radius >= GetScreenHeight() || ball.y - ball.radius <= 0  ) ball.onCollision(1,-1);

    //horizontal collision check
    if( ball.x + ball.radius >= GetScreenWidth() || ball.x - ball.radius <= 0 ) ball.onCollision(-1,1);

    // Check overlap on both axes
    if (ball.x - ball.radius <= pad1.posx + 10 + pad1.width &&
            ball.x + ball.radius >= pad1.posx + 10 &&
            ball.y - ball.radius <= pad1.posy + pad1.height / 2.0f &&
            ball.y + ball.radius >= pad1.posy - pad1.height / 2.0f)
    {
        ball.onCollision(-1, 1);
    }

    if (ball.speedx > 0 &&
            ball.x + ball.radius >= pad2.posx - (pad2.width + 10) &&
            ball.x - ball.radius <= pad2.posx - 10 &&
            ball.y - ball.radius <= pad2.posy + pad2.height / 2.0f &&
            ball.y + ball.radius >= pad2.posy - pad2.height / 2.0f)
    {
        ball.onCollision(-1, 1);
    }
    ball.update();
}

void Game::movement()
{
    if(IsKeyDown(KEY_DOWN)) pad1.movedown();
    else if(IsKeyDown(KEY_UP)) pad1.moveup();

    if(IsKeyDown(KEY_S)) pad2.movedown();
    else if (IsKeyDown(KEY_W)) pad2.moveup();
}

