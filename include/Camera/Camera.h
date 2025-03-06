#ifndef CAMERA_H
#define CAMERA_H

#include <raylib.h> // Camera2d

class CameraInternal
{
private:
    Camera2D camera{{0}, {0}, 1.0f, 0};

public:
    CameraInternal() = default;
    ~CameraInternal() = default;

    // Constructor
    CameraInternal(const Vector2 target, const Vector2 offset, const float rotation, float zoom = 1.0f)
    {
        this->camera.offset = offset;
        this->camera.target = target;
        this->camera.rotation = rotation;
        this->camera.zoom = zoom;
    }

    /// setter
    /// @warning la valor de zoom no puede ser 0.
    void SetZoom(const float value);
    void Rotation(const float value);

    void SetTarget(const Vector2 new_target);
    void SetTarget(const float x, const float y);

    void SetOffset(const Vector2 new_offset);
    void SetOffset(const float x, const float y);

    /// getter
    Vector2 GetTarget() const { return this->camera.target; }
    Vector2 GetOffset() const { return this->camera.offset; }
    float GetRotation() const { return this->camera.rotation; }
    float GetZoom() const { return this->camera.zoom; }
};

#endif