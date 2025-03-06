#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject/GameObject.h" // GameObject
#include <raylib.h>

namespace Internal
{
    Camera2D InitCamera();
};

class Player : public GameObject
{
private:
    Rectangle shape{0};
    Camera2D camera{0};

    Vector2 position{0, 0};
    float speed_run{100.0f};

public:
    Player();
    ~Player() = default;

    Player(const float pos_x, const float pos_y);

    void Input() override;
    void Update() override;
    void Draw() const override;

    /// Getters
    Vector2 GetPosition() const { return this->position; }
    Camera2D GetCamera() const { return this->camera; }
};

#endif