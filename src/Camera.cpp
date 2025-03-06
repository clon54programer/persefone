#include "Camera/Camera.h"

void Camera::Input()
{
}
void Camera::Update()
{
}
void Camera::Draw() const
{
}

void Camera::SetZoom(const float value)
{
    if (value < 1.0f)
    {
        this->camera.zoom = 1.0f;
    }
    else
    {
        this->camera.zoom = value;
    }
}
void Camera::Rotation(const float value)
{
    this->camera.rotation = value;
}

void Camera::SetTarget(const Vector2 new_target)
{
    this->camera.target = new_target;
}

void Camera::SetTarget(const float x, const float y)
{
    Vector2 target = {};
    target.x = x;
    target.y = y;

    this->SetTarget(target);
}

void Camera::SetOffset(const Vector2 new_offset)
{
    this->camera.offset = new_offset;
}

void Camera::SetOffset(const float x, const float y)
{
    Vector2 offset = {};
    offset.x = x;
    offset.y = y;

    this->SetOffset(offset);
}