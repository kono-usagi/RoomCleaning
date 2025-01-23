#pragma once

#include"DxLib.h"
#include<stdio.h>
#include<string.h>

#include"../InventoryViewModel/InventoryViewModel.h"

namespace rc
{
	class Amenities :public InventoryViewModel
	{
	public:
		void MakeItem(InventoryItem* AmenitiesArray[]) override;
	};

}