#include"GameManager.h"


namespace mea
{
    GameManager::GameManager()//�R���X�g���N�^
    {
        //Window������
        Window::Init();
        //GameSetting������
        GameSetting::Init();
    }
    GameManager::~GameManager()//�f�X�g���N�^
    {
        //�����Ȃ�
    }
    static void Finalize()//�㏈��
    {
        SceneManager->GameLoop();
    }
}