#include "game.h"
#include"raylib.h"


int main(int argc, const char** argv){

    //setting the dimension of game window
    const int screen_width = 1200;
    const int screen_height = 800;

    //creating the object of game class
    Game game = Game(); 

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

        //implementing game class methods
        game.draw();
        game.movement();
        game.update();

        //displaying the score 
        DrawText(TextFormat("score: %i",game.score1()), 20, 20, 20, BLACK);
        DrawText(TextFormat("score: %i",game.score2()),screen_width -100, 20, 20,BLACK);

        //endling the drawing 
        EndDrawing();
    }

    //closing the game window
    CloseWindow();
    return 0;

}
