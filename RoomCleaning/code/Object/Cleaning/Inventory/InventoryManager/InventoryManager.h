#pragma once

//#include"../InventoryViewModel/InventoryViewModel.h"
#include"../../RoomCleaning/code/Object/Input/Input.h"
#include"../../RoomCleaning/code/Button/OnClickListener.h"
#include"../../RoomCleaning/code/Button/Button.h"
#include"../InventoryView/InventoryView.h"
#include"../../Inventory/Tools/Tools.h"
#include"../../Inventory/Amenities/Amenities.h"
#include"../../Inventory/Linens/Linens.h"

#include"DxLib.h"

class Button;

namespace rc
{
    class InventoryManager
    {
    public:
        InventoryManager();//コンストラクタ
        ~InventoryManager();

        void Update();
        
        //現在のタブ変更
        void ChangeTab(int tab);

        void MouseInput();
        void Draw();


        //表示するページ　**デバッグ用
        //DrawFormatString(0, 0, GetColor(255, 255, 255), mNowTab);

    private:
        int mNowTab=0;//現在のタブ

        InventoryView inventoryView;
        Input input;

        //ボタン
        Button* m_rect_bt;
        int m_count;
        class CountUpListener :public OnClickListener
        {
        public:
            CountUpListener(InventoryManager& obj):m_parent(obj){}
            void OnClick() override{m_parent.m_count++;}

        private:
            InventoryManager& m_parent;
        };

    };
}