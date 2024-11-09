#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// リザルト内の種類別タグ
    /// </summary>
    static struct ResultObjectTag
    {
        std::string PLAYER = "player";
        std::string STAGE = "stage";
        std::string UI = "ui";
    } resultObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>ResultObjectTagAll
    {
        resultObjectTag.STAGE,
        resultObjectTag.PLAYER,
        resultObjectTag.UI,
    };
}