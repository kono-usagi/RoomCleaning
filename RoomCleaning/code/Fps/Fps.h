#pragma once

namespace mea
{
	class Fps
	{
	public:

		/// <summary>
		/// �R���X�g���N�^
		/// </summary>
		Fps();

		/// <summary>
		/// �f�X�g���N�^
		/// </summary>
		~Fps();

		/// <summary>
		/// �X�V����
		/// </summary>
		void Update();

		/// <summary>
		/// �f���^�^�C���擾
		/// </summary>
		/// <returns>�f���^�^�C��</returns>
		float GetDeltaTime()const { return deltaTime; }

	private:

		float nowTime;		//���݂̎���
		float prevTime;		//�ߋ��̎���
		float deltaTime;	//�f���^�^�C��
	};
}