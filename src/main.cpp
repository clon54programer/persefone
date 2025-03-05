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
        // Inicio de la zona Input

        // Fin de la zona Input

        // Inicio de la zona Update

        // Fin de la zona Update

        BeginDrawing();

        DrawText("Persefone", WIDTH / 2, HEIGHT / 2, 40, MAGENTA);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}