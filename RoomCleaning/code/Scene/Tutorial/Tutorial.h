#pragma once
#include"../../Scene/SceneBase/SceneBase.h"
#include"../../Object/GameObjectManager/GameObjectManager.h"

namespace rc
{
    /// <summary>
    /// �`���[�g���A���؂�ւ��A�i�s�Ǘ��N���X
    /// </summary>
    class Tutorial :public SceneBase
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        Tutorial();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~Tutorial();

    private:
        /// <summary>
        /// �V�[���X�V����
        /// </summary>
        /// <param name="deltaTime">�f���^�^�C��</param>
        /// <returns>���̃t���[���V�[��</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        ///  �V�[���`�揈��
        /// </summary>
        void Draw()override;
    };
}