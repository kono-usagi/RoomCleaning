#include <DxLib.h>
#include "Fps.h"

namespace mea
{
	Fps::Fps()
		:nowTime(static_cast<float>(GetNowCount()))
		, prevTime(nowTime)
		, deltaTime(0.0f)
	{
		//�����Ȃ�
	}

	Fps::~Fps()
	{
		//�����Ȃ�
	}

	void Fps::Update()
	{
		//�t���[�����[�g�Z�o
		nowTime = static_cast<float>(GetNowCount());
		deltaTime = (nowTime - prevTime) / 1000.0f;
		prevTime = nowTime;
	}
}