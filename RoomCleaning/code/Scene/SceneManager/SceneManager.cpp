#include<DxLib.h>
#include<assert.h>

#include "SceneManager.h"
#include"../../Scene/SceneBase/SceneBase.h"
#include "../../Scene/Cleaning/Cleaning.h"
#include"../../Fps/Fps.h"

namespace mea
{
    SceneManager::SceneManager()
        :mHoldScene(nullptr)
        , mFps(new Fps)
    {
        //����������
        GameObjectManager::Initialize();
        //AssetManager::InitAssetManager(); �C���X�^���X����

        //���݂̃V�[�����^�C�g���ɐݒ�
        mNowScene.emplace(new Play);
    }

    SceneManager::~SceneManager()
    {
        //�����Ȃ�
    }

    void SceneManager::GameLoop()
    {
        // �G�X�P�[�v�L�[��������邩�E�C���h�E��������܂Ń��[�v
        while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
        {
            //�V�[���̃t���[
            UpdateScene();    //�X�V����
            ChangeScene();    //�؂�ւ�����
            DrawScene();      //�`�揈��
        }
    }

    void SceneManager::UpdateScene()
    {
        //���݂̃V�[�����X�V����mHoldScene�ɑ��
        mFps->Update();
        mHoldScene = mNowScene.top()->Update(mFps->GetDeltaTime());
    }

    void SceneManager::DrawScene()
    {
        ClearDrawScreen();					// ��ʂ��N���A
        mNowScene.top()->Draw();		// ���̃V�[����\��
        ScreenFlip();						// ����ʂ̓��e��\��ʂɔ��f
    }

    void SceneManager::ChangeScene()
    {
        // ���̃V�[���������ł͂Ȃ�������
        if (mNowScene.top().get() != mHoldScene)
        {
            //���݂̃V�[�����폜���A���̃V�[���ɐ؂�ւ�
            mNowScene.pop();
            mNowScene.emplace(mHoldScene);

            //�V�[���̒��g����̏ꍇ�v���O�����������I��
            assert(!mNowScene.empty());
        }
    }

}