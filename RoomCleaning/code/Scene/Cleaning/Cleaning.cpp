#include"Cleaning.h"

namespace rc
{
    Cleaning::Cleaning()
    {
        //���݂̃V�[��
        GameObjectManager::NowSceneSet(CleaningObjectTagAll);
        ////�v���C���[����
        //GameObjectManager::Entry(new Player);
        ////�X�e�[�W����
        //GameObjectManager::Entry(new Stage);
        ////�}�b�v�I�u�W�F�N�g����
        //GameObjectManager::Entry(new MapObject);
        ////UI����
        //GameObjectManager::Entry(new PlayUi);
    }
    Cleaning::~Cleaning()
    {
    }

    SceneBase* Cleaning::Update(float deltaTime)
    {
        // ���ׂẴQ�[���I�u�W�F�N�g�̍X�V
        GameObjectManager::Update(deltaTime);

        GameObjectManager::Draw();

        //�Q�[���I��
        /*if (GameObjectManager::GetGameOver())
        {
            GameObjectManager::ReleaseAllObj();
            return new Play;
        }*/

        return this;
    }

    void Cleaning::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        GameObjectManager::Draw();
        DrawFormatString(0, 0, GetColor(255, 255, 255), "cleaning");
        //DrawGrid(3000, 30);
    }
}