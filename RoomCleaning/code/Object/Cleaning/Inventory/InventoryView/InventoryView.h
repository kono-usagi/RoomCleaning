#pragma once

#include"../InventoryViewModel/InventoryViewModel.h"

#include"DxLib.h"

namespace rc
{
	class InventoryView :public InventoryViewModel
	{
	public:

		InventoryView();//コンストラクタ
		void MakeItem(InventoryItem* InventoryArray[]) override;


		void ApplyViewMake(InventoryItem* InventoryArray[]);

	private:
		static const int mItemXDistance = 50;//アイテムの横の距離

		static const int mItemImageY = 1000;//アイテム画像Y座標
		static const int mItemNameY = 1000;//アイテム名Y座標


		int mItemImageX;//アイテム画像X座標
		int mItemNameX;//アイテム名X座標




		
	};
}
