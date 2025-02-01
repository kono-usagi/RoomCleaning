#include "BackGround.h"


namespace rc
{
    BackGround::BackGround()
        :GameObject(cleaningObjectTag.UI)
    {
        mBackGroundImageHandle = LoadGraph("../asset/Image/simple_hotel_room02.png");
        
    }

    BackGround::~BackGround()
    {
        
    }

    void BackGround::Update(float deltaTime)
    {
       // Draw();
    }

    void BackGround::Draw()
    {
        //îwåiï\é¶
        DrawExtendGraph(300, 0, 1614, 880,  mBackGroundImageHandle,TRUE);
    }


}