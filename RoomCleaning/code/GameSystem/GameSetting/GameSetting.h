#pragma once
#include <DxLib.h>
#include <memory>

namespace mea
{
    /// <summary>
    /// �Q�[���Z�b�e�B���O
    /// </summary>
    class GameSetting
    {
    public:
        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        GameSetting();

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~GameSetting();

        /// <summary>
        /// ����������
        /// </summary>
        static void Init();

        /// <summary>
        /// ���C�u�����������O�̏���
        /// </summary>
        static void BeforeLibInit();

        /// <summary>
        /// ���C�u������������̏���
        /// </summary>
        static void AfterLibInit();

    private:

        static std::unique_ptr<GameSetting> mSingleton;           //���g�̎���

    };
}