#include"Tutorial.h"
#include"../../Scene/Title/Title.h"

namespace rc
{
    Tutorial::Tutorial()
    {
        //�S�I�u�W�F�N�g�̐���
    }
    Tutorial::~Tutorial()
    {
        //�����Ȃ�
    }
    SceneBase* Tutorial::Update(float deltaTime)
    {
        // ���ׂẴQ�[���I�u�W�F�N�g�̍X�V
        GameObjectManager::Update(deltaTime);

        

        return this;
    }

    void Tutorial::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        GameObjectManager::Draw();
        //DrawGrid(3000, 30);
    }
}