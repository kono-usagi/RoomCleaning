#include"InventoryView.h"


namespace rc
{
	InventoryView::InventoryView()
	{
		//インベントリ全体枠表示

		//現在のタブを掃除道具に設定


		mItemImageX = 100;
		mItemNameX = 100;
	}

	void InventoryView::MakeItem(InventoryItem* InventoryArray[])
	{
		

	}

	void InventoryView:: ApplyViewMake(InventoryItem* InventoryArray[])
	{
		//InventoryArray = inventoryItem;

		//繰り返し
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			//画像描画
			//DrawGraph()
			DrawExtendGraph(mItemImageX, mItemImageY, 1921, 1081, InventoryArray[i][1].ItemImageHandle, TRUE);

			//名前描画
			DrawString(mItemNameX, mItemNameY, InventoryArray[i][2].ItemDisplayName, GetColor(255, 255, 255));

			mItemImageX += mItemXDistance;
			mItemNameX += mItemXDistance;
		}

		//前のやつ削除?

	}
}