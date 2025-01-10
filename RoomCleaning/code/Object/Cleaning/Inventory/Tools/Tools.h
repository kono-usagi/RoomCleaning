#pragma once

#include<stdio.h>
#include<string.h>

#include"../InventoryViewModel/InventoryViewModel.h"


namespace rc
{
	class Tools :public InventoryViewModel
	{
	public:
		void MakeItem() override;

		struct InventoryItem ToolsArray[ARRAY_SIZE][ARRAY_SIZE];
		lstrcpy_s(ToolsArray[0][0].ItemDissplayName, 10, "ë|èúìπãÔ");
		//https://ja.wikibooks.org/wiki/%E3%82%B2%E3%83%BC%E3%83%A0%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0/RPG/%E3%82%A2%E3%82%A4%E3%83%86%E3%83%A0%E5%AE%9A%E7%BE%A9

		
	private:
		
	};

}