#pragma once


namespace rc
{
	class InventoryViewModel
	{
	public:


		virtual void MakeItem() = 0;

		int ItemID;
		int ItemDisplayName;
		int ItemImageHandle;

		//選択されたページに更新


	private:
	};
}