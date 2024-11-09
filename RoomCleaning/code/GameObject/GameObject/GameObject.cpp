?#include"GameObject.h"

namespace rc
{
    GameObject::GameObject(std::string tagName)
        :mTag(tagName)
        , mPos(VGet(0, 0, 0))
        , mMapX()
        , mMapY()
    {
    }

    GameObject::~GameObject() {}
}