#pragma once

#include<string.h>



namespace rc
{
	class InventoryViewModel
	{
	public:
		static const int ARRAY_SIZE = 6;
		//static const int ARRAY_SIZE = 6;

		virtual void MakeItem() = 0;

		struct InventoryItem
		{
			int ItemID;
			int ItemImageHandle;
			char ItemDisplayName[20];
		};

		//選択されたページに更新


	private:
	};
}