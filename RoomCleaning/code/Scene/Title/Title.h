#pragma once
#include"../../Scene/SceneBase/SceneBase.h"


namespace rc
{
    /// <summary>
    /// �^�C�g����ʂ̐i�s�Ǘ��N���X
    /// </summary>
    class Title :public SceneBase
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        Title();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~Title();

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