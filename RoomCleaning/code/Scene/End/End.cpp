#include"End.h"
#include"../../Scene/Title/Title.h"

namespace rc
{
    End::End()
    {
        //�S�I�u�W�F�N�g�̐���
    }
    End::~End()
    {
        //�����Ȃ�
    }
    SceneBase* End::Update(float deltaTime)
    {
        // ���ׂẴQ�[���I�u�W�F�N�g�̍X�V
        GameObjectManager::Update(deltaTime);

        //�ȉ��^�C�g���ɖ߂鏈�� �G���f�B���O����������
        /*if ()
        {
            GameObjectManager::ReleaseAllObj();
            return new Title;
        }*/

        return this;
    }

    void End::Draw()
    {
        //���ׂẴQ�[���I�u�W�F�N�g�̕`��
        GameObjectManager::Draw();
        //DrawGrid(3000, 30);
    }
}