#include <iostream>
#include <raylib.h>

#include "Player/Player.h" // Player

void InputDebug();
void InputPlayer(Rectangle &player);
void InputCamara(Camera2D &camara);

int main()
{
    const int WIDTH = 450;
    const int HEIGHT = 450;

    InitWindow(WIDTH, HEIGHT, "Persefone");

    Player player(WIDTH / 2, HEIGHT / 2);

    /*Camera2D camera = {0};
    camera.target = Vector2{};
    camera.offset = {WIDTH / 2.0f, HEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
    */

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Inicio de la zona Input
        player.Input();
        // Fin de la zona Input

        // Inicio de la zona Update
        player.Update();

        // Fin de la zona Update

        BeginDrawing();

        ClearBackground(WHITE);

        // BeginMode2D(camera);

        player.Draw();

        // EndMode2D();

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

void InputCamara(Camera2D &camara)
{
    if (IsKeyPressed(KEY_A))
    {
        camara.zoom += 1;
    }
    if (IsKeyPressed(KEY_D))
    {
        camara.zoom -= 1;
    }
}