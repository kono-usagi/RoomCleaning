#include"Collision.h"
#include"DxLib.h"

namespace rc
{
    Collision::Collision()
        :GameObject(cleaningObjectTag.PLAYER)//コンストラクタ
    {

    }

    Collision::~Collision()//デストラクタ
    {

    }

    void Collision::Update(float deltaTime)//更新
    {

    }


    void Collision::DrawCol()
    {
        //DrawBox();
    }
}