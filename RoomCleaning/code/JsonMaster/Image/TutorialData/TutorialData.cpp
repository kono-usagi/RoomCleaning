#include"TutoiralData.h"

namespace rc
{
    TutorialData::TutorialData(Json json)
    {
        globaldata.mBackGround = json["global"]["background"];
        globaldata.mLeftSide = json["global"]["leftside"];
        globaldata.mMoveRock = json["global"]["moverock"];
        globaldata.mPlayer = json["global"]["player"];

        SetStageData(one, json["stage"]["one"]);
        SetStageData(two, json["stage"]["two"]);
        SetStageData(three, json["stage"]["three"]);
    }

    TutorialData::~TutorialData()
    {
        //èàóùÇ»Çµ
    }

    void TutorialData::SetStageData(StageData& dataname, Json json)
    {
        dataname.mMap = json["map"];
        dataname.mRightSide = json["rightside"];
        dataname.mCharacter = json["character"];
    }
}