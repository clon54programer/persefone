#include <iostream>
#include <raylib.h>

void InputDebug();
void InputPlayer(Rectangle &player);

int main()
{

    const int WIDTH = 450;
    const int HEIGHT = 450;

    InitWindow(WIDTH, HEIGHT, "Persefone");

    Rectangle player = {
        WIDTH / 4,
        WIDTH / 4,
        40,
        40,
    };

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Inicio de la zona Input
        InputDebug();
        InputPlayer(player);

        // Fin de la zona Input

        // Inicio de la zona Update

        // Fin de la zona Update

        BeginDrawing();

        ClearBackground(WHITE);

        DrawText("Persefone", WIDTH / 3, HEIGHT / 3, 40, MAGENTA);

        DrawRectangle(player.x, player.y, player.width, player.height, BLACK);

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

void InputPlayer(Rectangle &player)
{
    /// Init Y eje
    if (IsKeyUp(KEY_UP))
    {
        player.y += 1;
    }

    if (IsKeyUp(KEY_DOWN))
    {
        player.y -= 1;
    }

    /// End Y eje

    /// Init X eje
    if (IsKeyUp(KEY_LEFT))
    {
        player.x += 1;
    }

    if (IsKeyUp(KEY_RIGHT))
    {
        player.x -= 1;
    }

    /// End X eje
}