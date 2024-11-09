#include "GameSetting.h"

namespace mea
{
    //���̂̏�����
    std::unique_ptr<GameSetting> GameSetting::mSingleton = nullptr;

    //�R���X�g���N�^
    GameSetting::GameSetting()
    {
        BeforeLibInit();

        //DxLib����������
        if (DxLib_Init() == -1)
        {
            //�G���[���N�����璼���ɏI��
            DebugBreak();
        }

        AfterLibInit();
    }

    //�f�X�g���N�^
    GameSetting::~GameSetting()
    {
        //���C�u�����I��
        DxLib_End();
    }

    //����������
    void GameSetting::Init()
    {
        //���̂ɉ��������Ă��Ȃ�������
        if (!mSingleton)
        {
            //���̓��ɃC���X�^���X�𐶐�
            mSingleton.reset(new GameSetting);
        }
    }

    //���C�u�����������O�̏���
    void GameSetting::BeforeLibInit()
    {
        //�A���`�G�C���A�X�̐ݒ�
        SetFullSceneAntiAliasingMode(4, 2);
    }

    //���C�u������������̏���
    void GameSetting::AfterLibInit()
    {
        //�`���𗠉�ʂɐݒ�
        SetDrawScreen(DX_SCREEN_BACK);

        SetBackgroundColor(0, 0, 0);   // �w�i�F�ݒ�
    }
}