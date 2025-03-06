#include "Player/Player.h"

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
}