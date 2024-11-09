#include"Tutorial.h"
#include"../../Scene/Title/Title.h"

namespace rc
{
    Tutorial::Tutorial()
    {
        //全オブジェクトの生成
    }
    Tutorial::~Tutorial()
    {
        //処理なし
    }
    SceneBase* Tutorial::Update(float deltaTime)
    {
        // すべてのゲームオブジェクトの更新
        GameObjectManager::Update(deltaTime);

        

        return this;
    }

    void Tutorial::Draw()
    {
        //すべてのゲームオブジェクトの描画
        GameObjectManager::Draw();
        //DrawGrid(3000, 30);
    }
}