#pragma once

#include<string.h>


namespace rc
{
	class InventoryViewModel
	{
	public:
		static const int ARRAY_SIZE = 6;
		//static const int ARRAY_SIZE = 6;


		struct InventoryItem//インベントリ構造体
		{
			int ItemID;
			int ItemImageHandle;
			char ItemDisplayName[10];
		};

		virtual void MakeItem(InventoryItem* inventoryItem[]) = 0;

	private:

	};
}