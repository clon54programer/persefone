#ifndef CAMERA_H
#define CAMERA_H

#include <raylib.h>                // Camera2d
#include <GameObject/GameObject.h> // GameObject

class Camera : public GameObject
{
private:
    Camera2D camera{0, 0, 0, 0};

public:
    void Input() override;
    void Update() override;
    void Draw() const override;
};

#endif