#pragma once

namespace FG
{
	class UIObject
	{
	public:
		UIObject();
		virtual ~UIObject() = 0;

		virtual void Update(int dt) = 0;

		void SetParent(std::shared_ptr<UIObject> parent);
		void AddChild(std::shared_ptr<UIObject> child);

		void SetID(const std::string& id);
	protected:
		std::string mID;

		std::shared_ptr<UIObject> mParent;
		std::vector<std::shared_ptr<UIObject>> mChildren;
	};
}