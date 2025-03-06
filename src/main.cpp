#include <iostream>
#include <raylib.h>

#include "Player/Player.h" // Player
#include <string>          // to_string

void InputDebug();
void InputPlayer(Rectangle &player);
void InputCamara(Camera2D &camara);
void DrawPostionMouse(Vector2 &position);

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
    CameraInternal camera = player.GetCamera();

    Vector2 mouse_position{0, 0};

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Inicio de la zona Input
        player.Input();
        // Fin de la zona Input

        // Inicio de la zona Update
        player.Update();

        mouse_position = GetMousePosition();

        camera = player.GetCamera();

        // Fin de la zona Update

        BeginDrawing();

        ClearBackground(WHITE);

        BeginMode2D(camera.GetRaylibCamera());

        player.Draw();

        EndMode2D();

        DrawText("Persefone", WIDTH / 3, HEIGHT / 3, 40, MAGENTA);
        DrawPostionMouse(mouse_position);

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

void DrawPostionMouse(Vector2 &position)
{
    std::string pos_x = "X: ";
    std::string pos_y = "Y: ";

    pos_x += std::to_string(position.x);
    pos_y += std::to_string(position.y);

    DrawText(pos_x.c_str(), 80, 31, 24, BLACK);
    DrawText(pos_y.c_str(), 80, 68, 24, BLACK);

    // TraceLog(LOG_INFO, "%s", pos_x.c_str());
    // TraceLog(LOG_INFO, "%s", pos_y.c_str());
}