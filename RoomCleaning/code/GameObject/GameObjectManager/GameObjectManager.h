#pragma once
#include <DxLib.h>
#include <unordered_map>
#include <memory>
#include <vector>

#include"../../GameObject/GameObject/GameObject.h"
#include"../../GameObject/GameObject/CleaningObjectTag.h"
#include"../../GameObject/GameObject/TitleObjectTag.h"

class GameObject;

namespace rc
{
	class GameObjectManager final
	{
	public:
		/// <summary>
		/// �f�X�g���N�^
		/// </summary>
		~GameObjectManager();

		/// <summary>
		/// �}�l�[�W���[�C���X�^���X����
		/// </summary>
		static void Initialize();

		/// <summary>
		/// ���݂̃V�[���^�O���Z�b�g
		/// </summary>
		static void NowSceneSet(std::vector<std::string> NowObjTag);

		/// <summary>
		/// �I�u�W�F�N�g�o�^
		/// </summary>
		/// <param name="newObj">�o�^����I�u�W�F�N�g</param>
		static void Entry(GameObject* newObj);

		/// <summary>
		/// �S�I�u�W�F�N�g�̍폜
		/// </summary>
		static void ReleaseAllObj();

		/// <summary>
		/// �S�I�u�W�F�N�g�̍X�V����
		/// </summary>
		/// <param name="deltaTime">�f���^�^�C��</param>
		static void Update(float deltaTime);

		/// <summary>
		/// ���ׂẴI�u�W�F�N�g�̕`��
		/// </summary>
		static void Draw();

		/// <summary>
		/// �^�O��ނ̏��߂̃I�u�W�F�N�g��Ԃ�
		/// </summary>
		/// <param name="tag">�I�u�W�F�N�g�̎��</param>
		/// <returns>�ŏ��̃I�u�W�F�N�g</returns>
		GameObject* GetFirstGameObj(std::string tag);

		/// <summary>
		/// �Q�[���I�[�o�[��
		/// </summary>
		/// <returns></returns>
		static bool GetGameOver() { return mInstance->mGameOver; }

		/// <summary>
		/// �Q�[���I�[�o�[����Z�b�g
		/// </summary>
		/// <param name="gameOver"></param>
		static void SetGameOver(bool gameOver) { mInstance->mGameOver = gameOver; }

	private:
		GameObject* gameObject;

		/// <summary>
		/// �R���X�g���N�^
		/// </summary>
		GameObjectManager();


		bool mGameOver = false;//�Q�[���I�[�o�[����

		static std::unique_ptr<GameObjectManager> mInstance;							    // �Q�[���I�u�W�F�N�g�}�l�[�W���̎���
		std::vector<std::string> NowScene_ObjTag;											//���݂̃V�[���̃I�u�W�F�N�g�^�O
		std::unordered_map<std::string, std::vector<std::shared_ptr<GameObject>>> mObjects;	//�I�u�W�F�N�g���X�g
	};
}