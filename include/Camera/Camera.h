#ifndef CAMERA_H
#define CAMERA_H

#include <raylib.h> // Camera2d, Rectangle

class CameraInternal
{
private:
    Camera camera{};
    bool is_draw{false};

public:
    CameraInternal() = default;
    ~CameraInternal() = default;

    // Constructor
    CameraInternal(const Vector2 target, const Vector2 position, const float rotation, float zoom = 1.0f)
    {
        this->camera.position = {position.x, position.y, 0};
        this->camera.target = {target.x, target.y, 0};
        this->camera.up = {0.0f, 1.0f, 0.0f};
        this->camera.fovy = 60;

        this->camera.projection = CAMERA_PERSPECTIVE;
    }

    void DrawDebug(const Rectangle shape) const;

    void EnableDraw();
    void DisableDraw();

    bool IsEnable() const { return this->is_draw; }

    /// setter
    /// @warning la valor de zoom no puede ser 0.
    void
    SetZoom(const float value);
    void Rotation(const float value);

    void SetTarget(const Vector2 new_target);
    void SetTarget(const float x, const float y);

    void SetOffset(const Vector2 new_offset);
    void SetOffset(const float x, const float y);

    /// getter
    Camera3D GetRaylibCamera() const { return this->camera; }
    Vector3 GetTarget() const { return this->camera.target; }
    Vector3 GetOffset() const { return this->camera.offset; }
    float GetRotation() const { return this->camera.rotation; }
    float GetZoom() const { return this->camera.zoom; }
};

#endif