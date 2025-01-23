#include"Input.h"
#include"DxLib.h"

namespace rc
{
    void Input::KeyInputSpace()
    {
        //スペースキー入力
        if ((CheckHitKey(KEY_INPUT_SPACE)) != 0)
        {

        }
    }
    void Input::MouseInputLeft()
    {
        if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
        {
            //押されている
        }
    }
    void Input::DragAndDrop()
    {
        //D&D使えるようにする

        //座標の取得

        //離したら

        //座標の取得
    }
}