#include"DxLib.h"
#include"../Window/Window.h"
#include"../GameSetting/GameSetting.h"
#include"../SceneManager/SceneManager.h"
#include<memory>

namespace mea
{
    /// <summary>
    /// ゲーム全体の進行管理クラス
    /// </summary>
    class GameManager
    {
    public:
        GameManager();//コンストラクタ
        ~GameManager();//デストラクタ

        static void Finalize();

    private:

        //シーンマネージャー
        std::unique_ptr<class SceneManager> sceneManager;
    };
}