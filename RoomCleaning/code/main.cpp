#include <DxLib.h>
#include <memory>

#include "../code/GameSystem/GameManager/GameManager.h"

using namespace mea;

int WINAPI _stdcall WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{
	//�Q�[���V�[���Ǘ�
	std::shared_ptr<GameManager> gameManager(new GameManager);
	gameManager->Finalize();

	return 0;				// �\�t�g�̏I�� 
}