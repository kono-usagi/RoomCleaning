#include "CleaningData.h"

namespace rc
{

    CleaningData::CleaningData(Json json)
    {
        globaldata.mBackGround = json["global"]["background"];
        globaldata.mLeftSide = json["global"]["leftside"];
        globaldata.mMoveRock = json["global"]["moverock"];
        globaldata.mPlayer = json["global"]["player"];

        SetStageData(one, json["stage"]["one"]);
        SetStageData(two, json["stage"]["two"]);
        SetStageData(three, json["stage"]["three"]);
    }

    CleaningData::~CleaningData()
    {
        //????????
    }

    void CleaningData::SetStageData(StageData& dataname, Json json)
    {
        dataname.mMap = json["map"];
        dataname.mRightSide = json["rightside"];
        dataname.mCharacter = json["character"];
    }
}