#include <iostream>
#include <raylib.h>

void InputDebug();

int main()
{

    const int WIDTH = 450;
    const int HEIGHT = 450;

    InitWindow(WIDTH, HEIGHT, "Persefone");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Inicio de la zona Input
        InputDebug();

        // Fin de la zona Input

        // Inicio de la zona Update

        // Fin de la zona Update

        BeginDrawing();

        ClearBackground(WHITE);

        DrawText("Persefone", WIDTH / 3, HEIGHT / 3, 40, MAGENTA);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

void InputDebug()
{
    if (IsKeyPressed(KEY_SPACE))
    {
        std::cout << "[INFO] Presionaste la tecla espaciadora" << '\n';
    }
}