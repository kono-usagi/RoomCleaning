#pragma once

//#include"../InventoryViewModel/InventoryViewModel.h"
#include"../InventoryView/InventoryView.h"
#include"../../Inventory/Tools/Tools.h"
#include"../../Inventory/Amenities/Amenities.h"
#include"../../Inventory/Linens/Linens.h"
#include"../../RoomCleaning/code/Object/Input/Input.h"


namespace rc
{
    class InventoryManager
    {
    public:
        InventoryManager();//コンストラクタ

        void Update();
        
        

        //現在のタブ変更
        void ChangeTab(int tab);

        //表示するページ　**デバッグ用
        //DrawFormatString(0, 0, GetColor(255, 255, 255), mNowTab);

    private:

        int mNowTab=0;//現在のタブ

        InventoryView inventoryView;
        Input input;

    };
}