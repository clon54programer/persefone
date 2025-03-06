#include "Player/Player.h"
#include <raylib.h>

Player::Player()
{
    this->shape.width = 40;
    this->shape.height = 40;
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
}

void Player::Draw() const
{
    DrawRectangle(this->position.x, this->position.y, this->shape.width, this->shape.height, BLUE);
}