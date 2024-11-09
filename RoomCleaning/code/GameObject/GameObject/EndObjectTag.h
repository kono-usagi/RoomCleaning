#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// �G���h���̎�ޕʃ^�O
    /// </summary>
    static struct EndObjectTag
    {
        std::string PLAYER = "player";
        std::string STAGE = "stage";
        std::string UI = "ui";
    } endObjectTag;


    /// <summary>
    /// ���[�v����p
    /// </summary>
    static std::vector<std::string>EndObjectTagAll
    {
        endObjectTag.PLAYER,
        endObjectTag.UI,
    };
}