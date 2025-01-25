#include"InventoryManager.h"

namespace rc
{
	InventoryManager::InventoryManager(): m_count(0)
	{
		InventoryView;
		m_rect_bt = new Button;
		m_rect_bt->SetOnClickListener(new CountUpListner(*this));
		m_rect_bt->SetPos(50, 50);
	}

	InventoryManager::~InventoryManager()
	{
		if (m_rect_bt) {
			delete m_rect_bt;
			m_rect_bt = nullptr;
		}
	}

	void InventoryManager::Update()
	{
		//inventoryView.ApplyViewMake();

		if (m_rect_bt) {
			delete m_rect_bt;
			m_rect_bt = nullptr;
		}
	}

	void InventoryManager::ChangeTab(int tab)
	{

		mNowTab = tab;
	}

	void InventoryManager::MouseInput()
	{
		int mx = 0;
		int my = 0;

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

		m_rect_bt->Update(count, mx, my);
	}

	void InventoryManager::Draw()
	{

		m_rect_bt->Draw();
	}
}