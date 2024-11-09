#pragma once
#include <vector>
#include <string>

namespace rc
{
    /// <summary>
    /// ���|�p�[�g���̎�ޕʃ^�O
    /// </summary>
    static struct CleaningObjectTag
    {
        std::string PLAYER = "player";
        std::string STAGE = "stage";
        std::string UI = "ui";
    } cleaningObjectTag;


    /// <summary>
    /// ���[�v����p
    /// </summary>
    static std::vector<std::string>CleaningObjectTagAll
    {
        cleaningObjectTag.STAGE,
        cleaningObjectTag.PLAYER,
        cleaningObjectTag.UI,
    };
}