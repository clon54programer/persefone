#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

/// @brief Es una clase abstracta la
/// cual debe heredar todos las clases.
/// @attention Al ser una clase abstracta,
/// la clase hija que herede esta clase,
/// debe implementar los metodos
/// Input, Update y Draw.
class GameObject
{
public:
    GameObject() = default;
    virtual ~GameObject() = default;

    virtual void Input() = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
};

#endif