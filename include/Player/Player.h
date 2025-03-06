#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject/GameObject.h" // GameObject
#include <raylib.h>

class Player : public GameObject
{
private:
    Rectangle shape{};
    Camera2D camera{};

    Vector2 position{0, 0};
    float speed_run{0.0f};

public:
    void Input() override;
    void Update() override;
    void Draw() const override;
};

#endif