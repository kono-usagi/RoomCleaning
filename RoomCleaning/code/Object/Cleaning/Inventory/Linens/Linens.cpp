#include"Linens.h"


namespace rc
{
	void Linens::MakeItem(InventoryItem* LinensArray[])
	{
		//struct InventoryItem LinensArray[ARRAY_SIZE][ARRAY_SIZE];

		int InventoryID;

		InventoryID = 0;
		strcpy_s(LinensArray[InventoryID][0].ItemDisplayName, 10, "バスタオル");
		LinensArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/furo_bathtowel.png");//画像用意出来次第差し替えてください
		LinensArray[InventoryID][2].ItemID = 0;

		InventoryID = 1;
		strcpy_s(LinensArray[InventoryID][0].ItemDisplayName, 10, "フェイスタオル");
		LinensArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/nuno.png");//画像用意出来次第差し替えてください
		LinensArray[InventoryID][2].ItemID = 0;

		InventoryID = 2;
		strcpy_s(LinensArray[InventoryID][0].ItemDisplayName, 10, "バスマット");
		LinensArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/tissue_paper_box_open.png");
		LinensArray[InventoryID][2].ItemID = 0;

		InventoryID = 3;
		strcpy_s(LinensArray[InventoryID][0].ItemDisplayName, 10, "シーツ");
		LinensArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/SHEETS.png");
		LinensArray[InventoryID][2].ItemID = 0;

		InventoryID = 4;
		strcpy_s(LinensArray[InventoryID][0].ItemDisplayName, 10, "デュベカバー");
		LinensArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/DUVETCOVER.png");
		LinensArray[InventoryID][2].ItemID = 0;

		InventoryID = 5;
		strcpy_s(LinensArray[InventoryID][0].ItemDisplayName, 10, "ピローカバー");
		LinensArray[InventoryID][1].ItemImageHandle = LoadGraph("../asset/Image/SHEETS.png");//画像用意出来次第差し替えてください
		LinensArray[InventoryID][2].ItemID = 0;
	}
}