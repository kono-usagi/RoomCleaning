#pragma once
#include <memory>
#include"../../IOUtility/IOUtility.h"

#include"../TitleData/TitleData.h"
#include"../CleaningData/CleaningData.h"
#include"../ResultData/ResultData.h"
#include"../EndData/EndData.h"
#include"../TutorialData/TutoiralData.h"

namespace rc
{
	/// <summary>
	/// JsonImageデータ管理クラス
	/// </summary>
	class MasterImageData final
	{
	public:

		/// <summary>
		/// インスタンス
		/// </summary>
		MasterImageData();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~MasterImageData();

		/// <summary>
		/// TitleDataインスタンス
		/// </summary>
		/// <returns>titleデータ</returns>
		class TitleData* TitleInstance() { return titledata.get(); }

		/// <summary>
		/// CleaningDataインスタンス
		/// </summary>
		/// <returns>Cleaningデータ</returns>
		class CleaningData* CleaningInstance() { return cleaningdata.get(); }

		/// <summary>
		/// ResultDataインスタンス
		/// </summary>
		/// <returns>Resultデータ</returns>
		class ResultData* ResultDataInstance() { return resultdata.get(); }

		/// <summary>
		/// EndDataインスタンス
		/// </summary>
		/// <returns>Endデータ</returns>
		class EndData* EndDataInstance() { return enddata.get(); }

	private:

		IOUtility ioutility;							//IOUtilityインスタンス

		std::unique_ptr<class TitleData> titledata;     //title
		std::unique_ptr<class CleaningData> cleaningdata;	//cleaning
		std::unique_ptr<class ResultData> resultdata;	//result
		std::unique_ptr<class EndData> enddata;			//end
	};
}