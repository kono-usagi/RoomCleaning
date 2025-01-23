#ifndef __INPUT_H__
#define __INPUT_H__



#include"DxLib.h"

//#include"../Stage/Stage.h"


namespace rc
{
    class Input 
    {
    public:
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