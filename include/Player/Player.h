#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject/GameObject.h" // GameObject
#include <raylib.h>
#include <Camera/Camera.h> // Camera

class Player : public GameObject
{
private:
    Rectangle shape{0};
    CameraInternal camera{};

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
    CameraInternal GetCamera() const { return this->camera; }
};

#endif