#pragma once

#include"../InventoryViewModel/InventoryViewModel.h"

namespace rc
{
	class Tools :public InventoryViewModel
	{
	public:
		void MakeItem() override;

		int suponji;
		int soop;
		int towel;
		int hukin;
		int soujili;
		
	};

}