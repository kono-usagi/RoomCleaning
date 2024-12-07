#ifndef __INPUT_H__
#define __INPUT_H__



#include"DxLib.h"
#include"../GameObject/GameObject.h"

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
        /// スペースキー入力
        /// </summary>
        void KeyInputSpace();
        /// <summary>
        /// マウス左クリック
        /// </summary>
        void MouseInputLeft();

        void DragAndDrop();

    private:

    };
}

#endif __INPUT_H__