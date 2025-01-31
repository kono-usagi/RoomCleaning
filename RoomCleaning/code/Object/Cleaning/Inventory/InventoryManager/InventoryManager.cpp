#include"InventoryManager.h"

namespace rc
{
	int InventoryManager::mNowTab;
	InventoryManager::InventoryManager()
		:GameObject(cleaningObjectTag.UI)
	{
		mNowTab = TAB_TOOLS;

		m_rect_bt = new Button;
		m_rect_bt->SetOnClickListener(new SelectTabLitsener(*this));
		m_rect_bt->SetPos(50, 50);
	}

	InventoryManager::~InventoryManager()
	{
		if (m_rect_bt) {
			delete m_rect_bt;
			m_rect_bt = nullptr;
		}
	}

	void InventoryManager::Update(float deltaTime)
	{
		//inventoryView.ApplyViewMake();
		MouseInput();
		Draw();
	}

	void InventoryManager::MouseInput()
	{
		GetMousePoint(&mx, &my);

		// マウスクリックの入力フレームを数える
		static int count = 0;

		if (GetMouseInput() & MOUSE_INPUT_LEFT) {
			count++;
			if (count > 100) count = 2;
		}
		else {
			count = 0;
		}

		if (mNowTab == TAB_TOOLS)
		{
			inventoryView.ApplyViewMake(tools.);
		}
		if (mNowTab == TAB_LINENS)
		{

		}
		if (mNowTab == TAB_AMENITIES)
		{

		}

		m_rect_bt->Update(count, mx, my);
	}

	void InventoryManager::Draw()
	{
		m_rect_bt->Draw();
	}
}