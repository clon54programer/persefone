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
        this->position.y += 1;
    }

    if (IsKeyDown(KEY_DOWN))
    {
        this->position.y -= 1;
    }

    /// End Y eje

    /// Init X eje
    if (IsKeyDown(KEY_LEFT))
    {
        this->position.x += 1;
    }

    if (IsKeyDown(KEY_RIGHT))
    {
        this->position.x -= 1;
        TraceLog(LOG_INFO, "Presionaste la tecla right");
    }

    /// End X eje
}

void Player::Update()
{
    /// Begin Camera

    this->camera.SetTarget(this->position);

    this->camera.SetOffset(this->shape.width / 2.0f, this->shape.height / 2.0f);

    /// End Camera
}

void Player::Draw() const
{
    DrawRectangle(this->position.x, this->position.y, this->shape.width, this->shape.height, BLUE);
}