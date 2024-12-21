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
        Draw();
    }

    void BackGround::Draw()
    {
        //îwåiï\é¶
        DrawExtendGraph(0, 0,1921,1081, mBackGroundImageHandle,TRUE);
    }


}