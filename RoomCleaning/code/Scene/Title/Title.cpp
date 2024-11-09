#include<DxLib.h>

#include "Title.h"
#include"../../Scene/Cleaning/Cleaning.h"

namespace rc
{
    Title::Title()
        :SceneBase()
    {
        //処理なし
    }

    Title::~Title()
    {
        //処理なし
    }

    SceneBase* Title::Update(float deltaTime)
    {
        //シーン切り替え
        if (CheckHitKey(KEY_INPUT_SPACE))
        {
            //プレイ中に切り替え
            return new Cleaning;
        }
        return this;
    }

    void Title::Draw()
    {
        DrawFormatString(0, 0, GetColor(255, 255, 255), "title");
        //タイトルロゴ表示
    }
}