#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// 清掃パート内の種類別タグ
    /// </summary>
    static struct CleaningObjectTag
    {
        std::string PLAYER = "player";
        std::string STAGE = "stage";
        std::string UI = "ui";
    } cleaningObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>CleaningObjectTagAll
    {
        cleaningObjectTag.STAGE,
        cleaningObjectTag.PLAYER,
        cleaningObjectTag.UI,
    };
}