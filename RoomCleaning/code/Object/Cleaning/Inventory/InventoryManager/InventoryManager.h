#pragma once

//#include"../InventoryViewModel/InventoryViewModel.h"
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

        void MouseInput();
        void Draw();


        int mx = 0;//マウスX値
        int my = 0;//マウスY値

        //表示するページ　**デバッグ用
        //DrawFormatString(0, 0, GetColor(255, 255, 255), mNowTab);

    private:
        static int mNowTab;//現在のタブ

        static const int TAB_TOOLS = 0;//掃除道具
        static const int TAB_LINENS = 1;//リネン
        static const int TAB_AMENITIES = 2;//アメニティ

        InventoryView inventoryView;

        //ボタン
        Button* m_rect_bt;
        
        class SelectTabLitsener :public OnClickListener//リスナークラス
        {
        public:
            SelectTabLitsener(InventoryManager& obj):m_parent(obj){}
            void OnClick() override
            {
                GetMousePoint(&m_parent.mx, &m_parent.my);

                if (m_parent.mx >= 50 && m_parent.mx <= 100)
                {
                    mNowTab = TAB_TOOLS;
                }
                if (m_parent.mx >= 101 && m_parent.mx <= 150)
                {
                    mNowTab = TAB_LINENS;
                }
                if (m_parent.mx >= 151 && m_parent.mx <= 200)
                {
                    mNowTab = TAB_AMENITIES;
                }
            }

        private:
            InventoryManager& m_parent;
        };

    };
}