#include "Window.h"

namespace mea
{
    //���̂����
    std::unique_ptr<Window> Window::mSingleton = nullptr;

    //�R���X�g���N�^
    Window::Window()
    {
        //TRUE �E�B���h�E���[�h�ŋN��
        ChangeWindowMode(TRUE);
        // ��ʃ��[�h��ݒ�
        SetGraphMode(static_cast<int>(WINDOW_SIZE.x), static_cast<int>(WINDOW_SIZE.y), COLOR_BIT);
        //PC�̐ݒ�ŃE�B���h�E�T�C�Y�̔䗦��ύX���Ă��v���O�������̐ݒ�T�C�Y�̂܂ܕ\�������
        SetWindowSizeExtendRate(1.0);
        //�E�B���h�E�̃^�C�g����ύX�ł���
        SetMainWindowText("MeaMea");
    }

    //�f�X�g���N�^
    Window::~Window()
    {
        //�����Ȃ�
    }

    //������
    void Window::Init()
    {
        //���̂ɉ��������Ă��Ȃ�������
        if (!mSingleton)
        {
            //���̓��ɃC���X�^���X�𐶐�
            mSingleton.reset(new Window);
        }
    }
}