#ifndef __GAMEOBJECT_H__
#define __GAMEOBJECT_H__

#include<DxLib.h>
#include<vector>

#include"../GameObjectManager/GameObjectManager.h"
#include"../GameObject/CleaningObjectTag.h"
#include"../GameObject/ResultObjectTag.h"
#include"../GameObject/TitleObjectTag.h"
#include"../GameObject/EndObjectTag.h"
#include"../../JsonMaster/JsonManager/JsonManager.h"

namespace rc
{
    /// <summary>
    /// ゲームオブジェクトの基底
    /// </summary>
    class GameObject
    {
    public:

        /// <summary>
        /// コンストラクタ
        /// </summary>
        /// <param name="tagNasme">オブジェクト名</param>
        GameObject(std::string tagNasme);

        /// <summary>
        /// デストラクタ
        /// </summary>
        virtual ~GameObject();

        /// <summary>
        /// 更新
        /// </summary>
        virtual void Update(float deltatime) = 0;

        /// <summary>
        /// 描画
        /// </summary>
        virtual void Draw() = 0;

        /// <summary>
        /// タグ名取得
        /// </summary>
        /// <returns>タグ名</returns>
        std::string GetTagName()const { return mTag; }

        /// <summary>
        /// 座標取得
        /// </summary>
        /// <returns>オブジェクトの位置</returns>
        const VECTOR& GetObjPos() const { return mPos; }

        bool mAlive = true;    // 生死状態
        /// <summary>
        /// ゲームオブジェクト生きているか 
        /// </summary>
        /// <returns></returns>
        bool GetAlive() const { return mAlive; }
        /// <summary>
        /// ゲームオブジェクト生死セット
        /// </summary>
        /// <param name="alive"></param>
        void SetAlive(bool alive) { mAlive = alive; }


    protected:
        VECTOR mPos;            //オブジェクト位置
        std::string mTag;       //オブジェクト種類
    };
}
#endif __GAMEOBJECT_H__