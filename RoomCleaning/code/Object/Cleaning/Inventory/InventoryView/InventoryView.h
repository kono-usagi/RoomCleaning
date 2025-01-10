#pragma once

namespace rc
{
	class InventoryView
	{
	public:
		/*int GetItemID() { return ItemID };
		int GetItemDisplayName() { return ItemDisplayName };
		int GetItemImageHandle() { return ItemImageHandle };*/

		//•`‰æ
		void DrawInventory();

	private:
		void ApplyViewMake(int ViewModel[]);

		//int mItemID;
		//int mItemDisplayName;
		//int mItemImageHandle;
		
	};
}
