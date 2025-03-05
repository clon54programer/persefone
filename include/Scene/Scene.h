#ifndef SCENE_H
#define SCENE_H

#include "GameObject/GameObject.h" // GameObject

class Scene : public GameObject
{
public:
    Scene() = default;
    virtual ~Scene() = default;

    virtual void Init() = 0;
};

#endif
