#pragma once

#include"DxLib.h"
#include<stdio.h>
#include<string.h>

#include"../InventoryViewModel/InventoryViewModel.h"

namespace rc
{
	class Linens :public InventoryViewModel
	{
	public:
		void MakeItem(InventoryItem* LinensArray[]) override;
	};
}