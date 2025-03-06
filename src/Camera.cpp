#include "Camera/Camera.h"

void CameraInternal::SetZoom(const float value)
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
void CameraInternal::Rotation(const float value)
{
    this->camera.rotation = value;
}

void CameraInternal::SetTarget(const Vector2 new_target)
{
    this->camera.target = new_target;
}

void CameraInternal::SetTarget(const float x, const float y)
{
    Vector2 target = {};
    target.x = x;
    target.y = y;

    this->SetTarget(target);
}

void CameraInternal::SetOffset(const Vector2 new_offset)
{
    this->camera.offset = new_offset;
}

void CameraInternal::SetOffset(const float x, const float y)
{
    Vector2 offset = {};
    offset.x = x;
    offset.y = y;

    this->SetOffset(offset);
}