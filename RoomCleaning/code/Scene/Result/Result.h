#pragma once
#include"../../Scene/SceneBase/SceneBase.h"
#include"../../Object/GameObjectManager/GameObjectManager.h"

namespace rc
{
    /// <summary>
    /// ���U���g�̐i�s�Ǘ��N���X
    /// </summary>
    class Result :public SceneBase
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        Result();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~Result();

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