#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// ���U���g���̎�ޕʃ^�O
    /// </summary>
    static struct ResultObjectTag
    {
        std::string PLAYER = "player";
        std::string STAGE = "stage";
        std::string UI = "ui";
    } resultObjectTag;


    /// <summary>
    /// ���[�v����p
    /// </summary>
    static std::vector<std::string>ResultObjectTagAll
    {
        resultObjectTag.STAGE,
        resultObjectTag.PLAYER,
        resultObjectTag.UI,
    };
}