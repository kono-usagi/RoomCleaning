#ifndef __INPUT_H__
#define __INPUT_H__



#include"DxLib.h"
#include"../../GameObject/GameObject.h"

//#include"../Stage/Stage.h"


namespace rc
{
    class Input :public GameObject
    {
    public:
        /// <summary>
        /// コンストラクタ
        /// </summary>
        Input();
        /// <summary>
        /// デストラクタ
        /// </summary>
        ~Input();

        /// <summary>
        /// 更新
        /// </summary>
        void Update(float deltaTime)override;
        /// <summary>
        /// 入力
        /// </summary>
        void KeyInput()override;
        /// <summary>
        /// 動けるかどうか
        /// </summary>
        /// <returns></returns>
        //bool isMove(int keyType)override;

    private:

    };
}

#endif __INPUT_H__