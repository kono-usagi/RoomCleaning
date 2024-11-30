#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// タイトルの種類別タグ
    /// </summary>
    static struct TitleObjectTag
    {
        std::string UI = "ui";
    } titleObjectTag;


    /// <summary>
    /// ループ制御用
    /// </summary>
    static std::vector<std::string>TitleObjectTagAll
    {
        titleObjectTag.UI,
    };
}