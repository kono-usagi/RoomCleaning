#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include<DxLib.h>
#include<vector>

#include"../GameObjectManager/GameObjectManager.h"
#include"../GameObject/CleaningObjectTag.h"
#include"../GameObject/ResultObjectTag.h"
#include"../GameObject/TitleObjectTag.h"
#include"../GameObject/EndObjectTag.h"
#include"../../JsonMaster/JsonManager/JsonManager.h"

namespace rc
{
    /// <summary>
    /// �Q�[���I�u�W�F�N�g�̊��
    /// </summary>
    class GameObject
    {
    public:

        /// <summary>
        /// �R���X�g���N�^
        /// </summary>
        /// <param name="tagNasme">�I�u�W�F�N�g��</param>
        GameObject(std::string tagNasme);

        /// <summary>
        /// �f�X�g���N�^
        /// </summary>
        virtual ~GameObject();

        /// <summary>
        /// �X�V
        /// </summary>
        virtual void Update(float deltatime) = 0;

        /// <summary>
        /// �`��
        /// </summary>
        virtual void Draw() = 0;

        /// <summary>
        /// �^�O���擾
        /// </summary>
        /// <returns>�^�O��</returns>
        std::string GetTagName()const { return mTag; }

        /// <summary>
        /// ���W�擾
        /// </summary>
        /// <returns>�I�u�W�F�N�g�̈ʒu</returns>
        const VECTOR& GetObjPos() const { return mPos; }

        bool mAlive = true;    // �������
        /// <summary>
        /// �Q�[���I�u�W�F�N�g�����Ă��邩 
        /// </summary>
        /// <returns></returns>
        bool GetAlive() const { return mAlive; }
        /// <summary>
        /// �Q�[���I�u�W�F�N�g�����Z�b�g
        /// </summary>
        /// <param name="alive"></param>
        void SetAlive(bool alive) { mAlive = alive; }


    protected:
        VECTOR mPos;            //�I�u�W�F�N�g�ʒu
        std::string mTag;       //�I�u�W�F�N�g���
    };
}
#endif __GAMEOBJECT_H__