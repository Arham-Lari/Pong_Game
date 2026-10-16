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
    ball.update();

    //vertical collision check
    if(ball.y + ball.radius >= GetScreenHeight() || ball.y - ball.radius <= 0  ) ball.onCollision(1,-1);

    //horizontal collision check
    if( ball.x + ball.radius >= GetScreenWidth() || ball.x - ball.radius <= 0 ) ball.onCollision(-1,1);


}

void Game::movement()
{
    if(IsKeyDown(KEY_DOWN)) pad1.movedown();
    else if(IsKeyDown(KEY_UP)) pad1.moveup();

    if(IsKeyDown(KEY_S)) pad2.movedown();
    else if (IsKeyDown(KEY_W)) pad2.moveup();
}

