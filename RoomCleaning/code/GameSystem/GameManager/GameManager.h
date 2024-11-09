#include"DxLib.h"
#include"../Window/Window.h"
#include"../GameSetting/GameSetting.h"
#include"../SceneManager/SceneManager.h"
#include<memory>

namespace mea
{
    /// <summary>
    /// �Q�[���S�̂̐i�s�Ǘ��N���X
    /// </summary>
    class GameManager
    {
    public:
        GameManager();//�R���X�g���N�^
        ~GameManager();//�f�X�g���N�^

        static void Finalize();

    private:

        //�V�[���}�l�[�W���[
        std::unique_ptr<class SceneManager> sceneManager;
    };
}