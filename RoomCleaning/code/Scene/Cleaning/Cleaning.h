#include"../../Scene/SceneBase/SceneBase.h"
#include"../../Scene/Title/Title.h"
#include"../../GameSystem/GameManager/GameManager.h"

#include"../../Object/GameObjectManager/GameObjectManager.h"
#include"../../Object/GameObject/CleaningObjectTag.h"

//#include "../../Object/Play/Player/Player.h"
//#include"../../Object/Play/Stage/Stage.h"
//#include"../../Object/Play/Ui/PlayUi.h"
//#include"../../Object/Play/MapObject/MapObject.h"

namespace rc
{
    /// <summary>
    /// �Q�[���p�[�g�̐i�s�Ǘ��N���X
    /// </summary>
    class Cleaning :public SceneBase
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        Cleaning();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~Cleaning();
    private:

        /// <summary>
        /// �V�[���X�V����
        /// </summary>
        /// <param name="deltaTime">�f���^�^�C��</param>
        /// <returns>���̃t���[���V�[��</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        /// �V�[���X�V����
        /// </summary>
        void Draw()override;
    };
}