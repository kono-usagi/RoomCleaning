#include "GameObjectManager.h"

namespace rc
{
    //���̂̒��g�����
    std::unique_ptr<GameObjectManager>GameObjectManager::mInstance = nullptr;

    GameObjectManager::GameObjectManager()
        :mObjects()
    {
        mInstance = nullptr;
    }
    GameObjectManager::~GameObjectManager()
    {
        //�O���錾���
        delete gameObject;
    }

    void GameObjectManager::Initialize()
    {
        //���g�̒��g����Ȃ�C���X�^���X����
        if (!mInstance)
        {
            mInstance.reset(new GameObjectManager);
        }
    }

    void GameObjectManager::NowSceneSet(std::vector<std::string> NowObjTag)
    {
        mInstance->NowScene_ObjTag = NowObjTag;
    }

    void GameObjectManager::Entry(GameObject* newObj)
    {
        //�^�O�̌��������ăI�u�W�F�N�g�o�^
        std::string tag = newObj->GetTagName();
        mInstance->mObjects[tag].emplace_back(newObj);
    }

    void GameObjectManager::ReleaseAllObj()
    {
        for (std::string& tag : mInstance->NowScene_ObjTag)
        {
            //��������A�N�e�B�u�I�u�W�F�N�g�̍폜
            while (!mInstance->mObjects[tag].empty())
            {
                //�v�f���Q�Ƃ��č폜
                delete mInstance->mObjects[tag].back().get();
                mInstance->mObjects[tag].pop_back();
            }
        }
    }

    void GameObjectManager::Update(float deltaTime)
    {
        for (std::string& tag : mInstance->NowScene_ObjTag)
        {
            // �Y���^�O�ɂ��邷�ׂẴI�u�W�F�N�g���X�V
            for (auto& obj : mInstance->mObjects[tag])
            {
                //�X�V
                obj->Update(deltaTime);
                //�Q�[���I�[�o�[
                if (tag == cleaningObjectTag.STAGE && obj->GetAlive() == false)
                {
                    mInstance->SetGameOver(true);
                }
            }
        }

    }

    void GameObjectManager::Draw()
    {
        for (std::string& tag : mInstance->NowScene_ObjTag)
        {
            for (auto& obj : mInstance->mObjects[tag])
            {
                obj->Draw();
            }
        }
    }

    GameObject* GameObjectManager::GetFirstGameObj(std::string tag)
    {
        //�A�N�e�B�u���X�g�ɉ��������ĂȂ�������
        if (mInstance->mObjects[tag].size() == 0)
        {
            //nullptr �� �����Ȃ�
            return nullptr;
        }

        //���������Ă�����A�N�e�B�u���X�g�̃I�u�W�F�N�g�̈�Ԗ�(��)��Ԃ�
        return mInstance->mObjects[tag][0].get();
    }
}