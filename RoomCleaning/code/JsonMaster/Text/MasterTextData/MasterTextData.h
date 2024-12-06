#pragma once
#include <memory>
#include "../../IOUtility/IOUtility.h"

#include "../CleaningData/CleaningTextData.h"

namespace rc
{
    /// <summary>
    /// JsonTextデータ管理クラス
    /// </summary>
    class MasterTextData final
    {
    public:
        /// <summary>
        /// インストラクタ
        /// </summary>
        MasterTextData();

        /// <summary>
        /// デストラクタ
        /// </summary>
        ~MasterTextData();

        /// <summary>
        /// CleaningTextDataインスタンス
        /// </summary>
        /// <returns>Cleaningデータ</returns>
        class CleaningTextData* CleaningInstance() { return cleaningtextdata.get(); }

    private:
        IOUtility ioutility;                            //IOUtilityインスタンス

        std::unique_ptr<class CleaningTextData> cleaningtextdata;   //Cleaning
    };
}