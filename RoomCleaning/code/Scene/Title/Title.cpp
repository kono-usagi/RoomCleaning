#include<DxLib.h>

#include "Title.h"
#include"../../Scene/Cleaning/Cleaning.h"

namespace rc
{
    Title::Title()
        :SceneBase()
    {
        //�����Ȃ�
    }

    Title::~Title()
    {
        //�����Ȃ�
    }

    SceneBase* Title::Update(float deltaTime)
    {
        //�V�[���؂�ւ�
        if (CheckHitKey(KEY_INPUT_SPACE))
        {
            //�v���C���ɐ؂�ւ�
            return new Cleaning;
        }
        return this;
    }

    void Title::Draw()
    {
        DrawFormatString(0, 0, GetColor(255, 255, 255), "title");
        //�^�C�g�����S�\��
    }
}