#include "Player/Player.h"
#include <raylib.h>

Player::Player()
{
    this->shape.width = 40;
    this->shape.height = 40;
}

Player::Player(const float pos_x, const float pos_y)
{
    this->position.x = pos_x;
    this->position.y = pos_y;

    this->shape.width = 40;
    this->shape.height = 40;
}

void Player::Input()
{
    /// Init Y eje
    if (IsKeyDown(KEY_UP))
    {
        this->position.y -= 1;
    }

    if (IsKeyDown(KEY_DOWN))
    {
        this->position.y += 1;
    }

    /// End Y eje

    /// Init X eje
    if (IsKeyDown(KEY_LEFT))
    {
        this->position.x -= 1;
    }

    if (IsKeyDown(KEY_RIGHT))
    {
        this->position.x += 1;
        // TraceLog(LOG_INFO, "Presionaste la tecla right");
    }

    if (IsKeyPressed(KEY_SPACE))
    {
        if (this->camera.IsEnable() == false)
        {
            this->camera.EnableDraw();
            TraceLog(LOG_INFO, "Activaste el modo debug");
        }
        else
        {
            this->camera.DisableDraw();
            TraceLog(LOG_INFO, "Desactivaste el modo debug");
        }
    }

    /// End X eje
}

void Player::Update()
{
    /// Begin Camera

    this->camera.SetTarget(this->position);

    this->camera.SetOffset((float)GetScreenWidth() / 2, (float)GetScreenHeight() / 2);

    /// End Camera
}

void Player::Draw() const
{

    Rectangle draw_shape = this->shape;
    draw_shape.height = this->shape.height;
    draw_shape.width = this->shape.width;

    draw_shape.x = this->position.x;
    draw_shape.y = this->position.y;

    DrawRectangleRec(draw_shape, BLACK);
    this->camera.DrawDebug(draw_shape);
}