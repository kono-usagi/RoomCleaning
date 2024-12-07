#ifndef _COLLISION_H_
#define _COLLISION_H_

#include"DxLib.h"
#include"../GameObject/GameObject.h"

namespace rc
{
    class Collision :public GameObject
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        Collision();
        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Collision();

        /// <summary>
        /// 更新
        /// </summary>
        void Update(float deltaTime)override;



        /// <summary>
        /// デバッグ用矩形描画
        /// </summary>
        void DrawCol();

    };
}

#endif _COLLISION_H_