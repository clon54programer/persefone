#include <iostream>
#include <raylib.h>

int main()
{

    const int WIDTH = 450;
    const int HEIGHT = 450;

    InitWindow(WIDTH, HEIGHT, "Persefone");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}