#include "MasterTextData.h"

namespace rc
{
    MasterTextData::MasterTextData()
    {
        //ファイルを読み込みインスタンス生成
        /*Json cleaningJson = ioutility.Analysis("../../code/JsonFile/CleaningTextData.json");
        cleaningtextdata.reset(new CleaningTextData(cleaningJson["text"]));*/
    }

    MasterTextData::~MasterTextData()
    {
        //処理なし
    }
}