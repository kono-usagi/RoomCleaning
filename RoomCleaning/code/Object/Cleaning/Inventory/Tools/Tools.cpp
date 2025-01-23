#include"Tools.h"


namespace rc
{
	void Tools::MakeItem(InventoryItem* ToolsArray[])
	{
		//struct InventoryItem ToolsArray[ARRAY_SIZE][ARRAY_SIZE];

		int InventoryID;

		InventoryID = 0;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "タオル");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/souji_zoukin.png");
		ToolsArray[InventoryID][2].ItemID = 0;

		InventoryID = 1;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "洗剤");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/senzai_syokki.png");
		ToolsArray[InventoryID][2].ItemID = 1;

		InventoryID = 2;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "スポンジ");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/cooking_sponge.png");
		ToolsArray[InventoryID][2].ItemID = 2;

		InventoryID = 3;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "布巾");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/nuno.png");
		ToolsArray[InventoryID][2].ItemID = 3;

		InventoryID = 4;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "掃除機");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/oosouji_soujiki.png");
		ToolsArray[InventoryID][2].ItemID = 4;
		
		InventoryID = 5;
		strcpy_s(ToolsArray[InventoryID][0].ItemDisplayName, 10, "ゴミ箱");
		ToolsArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/gomibako_full.png");
		ToolsArray[InventoryID][2].ItemID = 5;
	}

}