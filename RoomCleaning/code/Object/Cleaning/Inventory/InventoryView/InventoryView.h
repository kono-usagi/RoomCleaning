#pragma once

#include"../InventoryViewModel/InventoryViewModel.h"

#include"DxLib.h"

namespace rc
{
	class InventoryView :public InventoryViewModel
	{
	public:

		InventoryView();//コンストラクタ
		void MakeItem(InventoryItem* NowInventory[]) override;


		void ApplyViewMake(InventoryItem NowInventory);

		void Draw();

	private:
		static const int mItemXDistance = 50;//アイテムの横の距離

		static const int mItemImageY = 1000;//アイテム画像Y座標
		static const int mItemNameY = 1000;//アイテム名Y座標
		static const int mTabBoxX = 0;//タブ全体枠X座標
		static const int mTabBoxY = 880;//タブ全体枠Y座標


		int mItemImageX;//アイテム画像X座標
		int mItemNameX;//アイテム名X座標

		int mTabToolsImageHandle;
		int mTabLinensImageHandle;
		int mTabAmenitiesImageHandle;

		int mNowTabBoxImageHandle;
		int mBoxToolsImageHandle;
		int mBoxLinensImageHandle;
		int mBoxAmenitiesImageHandle;


		
	};
}
