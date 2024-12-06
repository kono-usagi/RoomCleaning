#include"GameManager.h"


namespace rc
{
    GameManager::GameManager()//コンストラクタ
    {
        //Log.txtを生成しないように設定
        SetOutApplicationLogValidFlag(false);

        //Window初期化
        Window::Init();
        //GameSetting初期化
        GameSetting::Init();
        JsonManager::InitJsonManager();
        sceneManager.reset(new SceneManager);
    }
    GameManager::~GameManager()//デストラクタ
    {
        //処理なし
    }
    void GameManager::Finalize()//後処理
    {
        sceneManager->GameLoop();
    }
}