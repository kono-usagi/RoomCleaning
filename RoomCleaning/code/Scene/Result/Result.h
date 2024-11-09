#pragma once
#include"../../Scene/SceneBase/SceneBase.h"
#include"../../Object/GameObjectManager/GameObjectManager.h"

namespace rc
{
    /// <summary>
    /// リザルトの進行管理クラス
    /// </summary>
    class Result :public SceneBase
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        Result();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Result();

    private:
        /// <summary>
        /// シーン更新処理
        /// </summary>
        /// <param name="deltaTime">デルタタイム</param>
        /// <returns>次のフレームシーン</returns>
        SceneBase* Update(const float deltaTime)override;

        /// <summary>
        ///  シーン描画処理
        /// </summary>
        void Draw()override;
    };
}