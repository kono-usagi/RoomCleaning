#include"InventoryView.h"


namespace rc
{
	InventoryView::InventoryView()
	{
		//ƒCƒ“ƒxƒ“ƒgƒŠ‘S‘Ì˜g•\Ž¦

		mTabToolsImageHandle = LoadGraph("../asset/Image/TAB_TOOLS.PNG");
		mTabLinensImageHandle = LoadGraph("../asset/Image/TAB_LINENS.PNG");
		mTabAmenitiesImageHandle = LoadGraph("../asset/Image/TAB_AMENITIES.PNG");

		DrawExtendGraph(100, 800, 100, 100, mTabToolsImageHandle, TRUE);
		DrawExtendGraph(200, 800, 100, 100, mTabLinensImageHandle, TRUE);
		DrawExtendGraph(300, 800, 100, 100, mTabLinensImageHandle, TRUE);

		mItemImageX = 100;
		mItemNameX = 100;
	}

	void InventoryView::MakeItem(InventoryItem* InventoryArray[])
	{
		//mNowTab;

	}

	void InventoryView:: ApplyViewMake(InventoryItem* InventoryArray[])
	{
		//InventoryArray = inventoryItem;

		//ŒJ‚è•Ô‚µ
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			//‰æ‘œ•`‰æ
			//DrawGraph()
			DrawExtendGraph(mItemImageX, mItemImageY, 1921, 1081, InventoryArray[i][1].ItemImageHandle, TRUE);

			//–¼‘O•`‰æ
			DrawString(mItemNameX, mItemNameY, InventoryArray[i][2].ItemDisplayName, GetColor(255, 255, 255));

			mItemImageX += mItemXDistance;
			mItemNameX += mItemXDistance;
		}

		//‘O‚Ì‚â‚Âíœ?

	}
}