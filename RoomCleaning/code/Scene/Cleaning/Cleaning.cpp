#include"Cleaning.h"

namespace rc
{
    Cleaning::Cleaning()
    {
        //現在のシーン
        GameObjectManager::NowSceneSet(CleaningObjectTagAll);
        ////プレイヤー生成
        //GameObjectManager::Entry(new Player);
        ////ステージ生成
        //GameObjectManager::Entry(new Stage);
        ////マップオブジェクト生成
        //GameObjectManager::Entry(new MapObject);
        ////UI生成
        //GameObjectManager::Entry(new PlayUi);
    }
    Cleaning::~Cleaning()
    {
    }

    SceneBase* Cleaning::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        GameObjectManager::Update(deltaTime);

        GameObjectManager::Draw();

        //ゲーム終了
        /*if (GameObjectManager::GetGameOver())
        {
            GameObjectManager::ReleaseAllObj();
            return new Play;
        }*/

        return this;
    }

    void Cleaning::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        DrawFormatString(0, 0, GetColor(255, 255, 255), "cleaning");
        //DrawGrid(3000, 30);
    }
}