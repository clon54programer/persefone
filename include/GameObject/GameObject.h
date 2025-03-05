#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

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