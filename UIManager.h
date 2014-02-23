#pragma once

namespace FG
{
	class UIObject;

	class UIManager
	{
	public:
		template <class UIClass>
		std::shared_ptr<UIClass> CreateUI()
		{
			std::shared_ptr<UIClass> ui(new UIClass);
			mUIObjects.insert(ui);

			return ui;
		}
	private:
		std::set<std::shared_ptr<UIObject>> mUIObjects;
	};
}