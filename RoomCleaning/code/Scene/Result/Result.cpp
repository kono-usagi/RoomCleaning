#include"Result.h"

namespace rc
{
    Result::Result()
    {
        //�S�I�u�W�F�N�g�̐���
    }
    Result::~Result()
    {
        //�����Ȃ�
    }
    SceneBase* Result::Update(float deltaTime)
    {
        // ���ׂẴQ�[���I�u�W�F�N�g�̍X�V
        GameObjectManager::Update(deltaTime);


        return this;
    }

    void Result::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        GameObjectManager::Draw();
        //DrawGrid(3000, 30);
    }
}