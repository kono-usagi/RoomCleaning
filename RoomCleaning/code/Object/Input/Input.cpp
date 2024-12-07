#include"Input.h"
#include"DxLib.h"

namespace rc
{
    Input::Input()
        :GameObject(playObjectTag.PLAYER)//コンストラクタ
    {
        
    }

    Input::~Input()//デストラクタ
    {

    }

    void Input::Update(float deltaTime)//更新
    {

    }
    void Input::KeyInput()
    {
        //処理なし
    }
}