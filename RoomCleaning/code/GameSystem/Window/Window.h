#pragma once
#include <DxLib.h>
#include <memory>

namespace mea
{
    /// <summary>
    /// �E�B���h�E
    /// </summary>
    class Window
    {
    public:
        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        ~Window();

        /// <summary>
        /// ����������
        /// </summary>
        static void Init();

        /// <summary>
        /// �E�B���h�E�T�C�Y�擾����
        /// </summary>
        /// <returns>�E�B���h�E�T�C�Y</returns>
        static const VECTOR GetWindowSize() { return mSingleton->WINDOW_SIZE; }

    private:

        /// <summary>
        /// �R���X�g���N�^(�V���O���g��)
        /// </summary>
        Window();

        const VECTOR WINDOW_SIZE = VGet(1920, 1080, 0);     //�E�B���h�E�T�C�Y
        static std::unique_ptr<Window> mSingleton;           //���g�̎���
        const int COLOR_BIT = 16;                           //�J���[�r�b�g
    };
}