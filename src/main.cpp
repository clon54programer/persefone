#include <iostream>
#include <raylib.h>

void InputDebug();
void InputPlayer(Rectangle &player);
void InputCamara(Camera2D &camara);

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

    Camera2D camera = {0};
    camera.target = Vector2{};
    camera.offset = {WIDTH / 2.0f, HEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Inicio de la zona Input
        InputDebug();
        InputPlayer(player);
        InputCamara(camera);

        // Fin de la zona Input

        // Inicio de la zona Update

        // Camera target follows player
        camera.target = {player.x + 20, player.y + 20};

        // Fin de la zona Update

        BeginDrawing();

        ClearBackground(WHITE);

        BeginMode2D(camera);

        DrawRectangle(player.x, player.y, player.width, player.height, BLACK);

        EndMode2D();

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