#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// エンド内の種類別タグ
    /// </summary>
    static struct EndObjectTag
    {
        std::string PLAYER = "player";
        std::string STAGE = "stage";
        std::string UI = "ui";
    } endObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>EndObjectTagAll
    {
        endObjectTag.PLAYER,
        endObjectTag.UI,
    };
}