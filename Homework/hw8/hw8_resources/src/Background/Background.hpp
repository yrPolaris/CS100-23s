#ifndef BACKGROUND_HPP__
#define BACKGROUND_HPP__

#include "GameObject.hpp"

class Background : public GameObject
{
public:
    Background(pGameWorld world);
    void Update() override;
    void OnClick() override;
};

#endif // !BACKGROUND_HPP__