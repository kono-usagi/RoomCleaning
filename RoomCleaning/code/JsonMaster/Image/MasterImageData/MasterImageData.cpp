#include "MasterImageData.h"

namespace rc
{
	MasterImageData::MasterImageData()
	{
		//ファイルを読み込みインスタンス生成

		/*Json titleJson = ioutility.Analysis("../../../JsonFile/Image/TitleData");
		titledata.reset(new TitleData(titleJson["title"]));*/

		/*Json cleaningJson = ioutility.Analysis("../../code/JsonFile/Image/CleaningData.json");
		cleaningdata.reset(new CleaningData(cleaningJson["cleaning"]));*/

		/*Json storyJson = ioutility.Analysis("../../code/JsonFile/Image/StoryData.json");
		storydata.reset(new StoryData(storyJson["story"]));*/

		/*Json endingjson = ioutility.Analysis("../../../JsonFile/Image/EndingData");
		endingdata.reset(new EndingData(endingjson["ending"]));*/
	}

	MasterImageData::~MasterImageData()
	{
		//処理なし
	}
}