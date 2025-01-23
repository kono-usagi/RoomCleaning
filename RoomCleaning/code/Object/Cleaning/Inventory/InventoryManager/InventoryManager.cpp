#include"InventoryManager.h"

namespace rc
{
	InventoryManager::InventoryManager()
	{
		InventoryView;
	}

	void InventoryManager::Update()
	{
		//inventoryView.ApplyViewMake();
	}

	void InventoryManager::ChangeTab(int tab)
	{

		mNowTab = tab;
	}

}