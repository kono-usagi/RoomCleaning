#pragma once
#include<DxLib.h>

namespace mea
{
    /// <summary>
    /// �V�[���̍X�V�����N���X
    /// </summary>
    class SceneBase
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        SceneBase();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~SceneBase();

        /// <summary>
        /// �V�[���X�V����
        /// </summary>
        /// <param name="deltaTime">�f���^�^�C��</param>
        /// <returns>���̃t���[���V�[��</returns>
        virtual SceneBase* Update(const float deltaTime) = 0;

        /// <summary>
        /// �V�[���`�揈��
        /// </summary>
        virtual void Draw() = 0;
    };
}