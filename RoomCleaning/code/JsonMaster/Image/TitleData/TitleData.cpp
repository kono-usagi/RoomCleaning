#include "TitleData.h"

namespace rc
{
    TitleData::TitleData(Json json)
        :mAllData(json),
        mBackGround(json["background"]),
        mSelect(json["select"])
    {
        //処理なし
    }

    TitleData::~TitleData()
    {
        //処理なし
    }
}