#include"Result.h"

namespace rc
{
    Result::Result()
    {
        //全オブジェクトの生成
    }
    Result::~Result()
    {
        //処理なし
    }
    SceneBase* Result::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        GameObjectManager::Update(deltaTime);


        return this;
    }

    void Result::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        //DrawGrid(3000, 30);
    }
}