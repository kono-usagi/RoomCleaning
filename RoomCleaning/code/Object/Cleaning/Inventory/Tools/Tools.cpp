#include"Tools.h"


namespace rc
{
	void Tools::MakeItem() 
	{
		struct InventoryItem ToolsArray[ARRAY_SIZE][ARRAY_SIZE];

		int InventoryID;

		InventoryID = 0;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "タオル");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/simple_hotel_room02.png");
		ToolsArray[InventoryID][2].ItemID = 0;

		InventoryID = 1;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "洗剤");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/simple_hotel_room02.png");
		ToolsArray[InventoryID][2].ItemID = 0;

		InventoryID = 2;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "スポンジ");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/simple_hotel_room02.png");
		ToolsArray[InventoryID][2].ItemID = 0;

		InventoryID = 3;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "布巾");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/simple_hotel_room02.png");
		ToolsArray[InventoryID][2].ItemID = 0;

		InventoryID = 4;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "掃除機");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/simple_hotel_room02.png");
		ToolsArray[InventoryID][2].ItemID = 0;
		
		InventoryID = 5;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "ゴミ箱");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/simple_hotel_room02.png");
		ToolsArray[InventoryID][2].ItemID = 0;
	}
}