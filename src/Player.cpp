#include "Player/Player.h"
#include <raylib.h>
#include <iostream> // std::cout

Camera2D Internal::InitCamera()
{
    Camera2D camera = {0};

    camera.rotation = 0.0f;
    camera.zoom = 5.0f;
    camera.offset = {0, 0};
    camera.target = {0, 0};

    return camera;
}

Player::Player()
{
    this->shape.width = 40;
    this->shape.height = 40;

    this->camera = Internal::InitCamera();
}

Player::Player(const float pos_x, const float pos_y)
{
    this->position.x = pos_x;
    this->position.y = pos_y;

    this->shape.width = 40;
    this->shape.height = 40;

    this->camera = Internal::InitCamera();
}

void Player::Input()
{
    /// Init Y eje
    if (IsKeyUp(KEY_UP))
    {
        this->position.y += 1;
    }

    if (IsKeyUp(KEY_DOWN))
    {
        this->position.y -= 1;
    }

    /// End Y eje

    /// Init X eje
    if (IsKeyUp(KEY_LEFT))
    {
        this->position.x += 1;
    }

    if (IsKeyUp(KEY_RIGHT))
    {
        this->position.x -= 1;
    }

    /// End X eje
}

void Player::Update()
{
    /// Begin Camera

    this->camera.target = this->position;

    this->camera.offset.x = this->shape.width / 2.0f;
    this->camera.offset.y = this->shape.height / 2.0f;

    /// End Camera
}

void Player::Draw() const
{
    DrawRectangle(this->position.x, this->position.y, this->shape.width, this->shape.height, BLUE);
}