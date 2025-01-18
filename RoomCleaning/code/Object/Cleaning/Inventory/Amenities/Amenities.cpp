#include"Amenities.h"


namespace rc
{
	void Amenities::MakeItem()
	{
		struct InventoryItem AmenitiesArray[ARRAY_SIZE][ARRAY_SIZE];

		int InventoryID;

		InventoryID = 0;
		strcpy_s(AmenitiesArray[InventoryID][0].ItemDisplayName, 10, "歯ブラシ");
		AmenitiesArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/TOOTHBRUSH.png");
		AmenitiesArray[InventoryID][2].ItemID = 0;

		InventoryID = 1;
		strcpy_s(AmenitiesArray[InventoryID][0].ItemDisplayName, 10, "ボディタオル");
		AmenitiesArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/senzai_syokki.png");
		AmenitiesArray[InventoryID][2].ItemID = 0;

		InventoryID = 2;
		strcpy_s(AmenitiesArray[InventoryID][0].ItemDisplayName, 10, "ティッシュ");
		AmenitiesArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/tissue_paper_box_open.png");
		AmenitiesArray[InventoryID][2].ItemID = 0;

		InventoryID = 3;
		strcpy_s(AmenitiesArray[InventoryID][0].ItemDisplayName, 10, "トイレットペーパー");
		AmenitiesArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/nuno.png");
		AmenitiesArray[InventoryID][2].ItemID = 0;

		InventoryID = 4;
		strcpy_s(AmenitiesArray[InventoryID][0].ItemDisplayName, 10, "水");
		AmenitiesArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/bottle_water.png");
		AmenitiesArray[InventoryID][2].ItemID = 0;

		/*InventoryID = 5;
		strcpy_s(AmenitiesArray[InventoryID][0].ItemDisplayName, 10, "スリッパ");
		AmenitiesArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/.png");
		AmenitiesArray[InventoryID][2].ItemID = 0;*/
	}
}