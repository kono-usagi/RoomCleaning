#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// �^�C�g���̎�ޕʃ^�O
    /// </summary>
    static struct TitleObjectTag
    {
        std::string UI = "ui";
    } titleObjectTag;


    /// <summary>
    /// ���[�v����p
    /// </summary>
    static std::vector<std::string>TitleObjectTagAll
    {
        titleObjectTag.UI,
    };
}