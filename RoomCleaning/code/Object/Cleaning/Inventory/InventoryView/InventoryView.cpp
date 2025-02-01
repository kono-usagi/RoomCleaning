#include"InventoryView.h"


namespace rc
{
	InventoryView::InventoryView()
	{
		//ƒCƒ“ƒxƒ“ƒgƒŠ‘S‘Ì˜g•\Ž¦

		mTabToolsImageHandle = LoadGraph("../asset/Image/TAB_TOOLS.PNG");
		mTabLinensImageHandle = LoadGraph("../asset/Image/TAB_LINENS.PNG");
		mTabAmenitiesImageHandle = LoadGraph("../asset/Image/TAB_AMENITIES .PNG");
		//mNowTabBoxImageHandle = LoadGraph("../asset/Image/TAB_AMENITIES.png");
		mBoxToolsImageHandle = LoadGraph("../asset/Image/TOOLS_BOX.png");
		mBoxLinensImageHandle = LoadGraph("../asset/Image/LINENS_BOX.png");
		mBoxAmenitiesImageHandle = LoadGraph("../asset/Image/AMENITIES_BOX.png");

		


		mItemImageX = 100;
		mItemNameX = 100;
	}

	void InventoryView::MakeItem(InventoryItem* NowInventory[])
	{
		//mNowTab;
		int InventoryID;

		InventoryID = 0;

		NowInventory = { NULL };

	}

	void InventoryView:: ApplyViewMake(InventoryItem NowInventory)
	{
		//InventoryArray = inventoryItem;

		//ŒJ‚è•Ô‚µ
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			//‰æ‘œ•`‰æ
			//DrawGraph()
			//DrawExtendGraph(mItemImageX, mItemImageY, 1921, 1081, InventoryArray[i][1].ItemImageHandle, TRUE);

			//–¼‘O•`‰æ
			//DrawString(mItemNameX, mItemNameY, InventoryArray[i][2].ItemDisplayName, GetColor(255, 255, 255));

			mItemImageX += mItemXDistance;
			mItemNameX += mItemXDistance;
		}

		//‘O‚Ì‚â‚Âíœ?

	}

	

	void InventoryView::Draw()
	{
		DrawGraph(0, 780, mTabToolsImageHandle, TRUE);
		DrawGraph(100, 780, mTabLinensImageHandle, TRUE);
		DrawGraph(200, 780, mTabAmenitiesImageHandle, TRUE);

		DrawGraph(mTabBoxX, mTabBoxY, mBoxToolsImageHandle, TRUE);
	}
}