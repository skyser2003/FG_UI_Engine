#include "stdafx.h"
#include "UIObject.h"

namespace FG
{
	UIObject::UIObject()
	{

	}
	UIObject::~UIObject()
	{

	}

	void UIObject::SetParent(std::shared_ptr<UIObject> parent)
	{
		mParent = parent;
	}
	void UIObject::AddChild(std::shared_ptr<UIObject> child)
	{
		auto it = std::find(mChildren.begin(), mChildren.end(), child);

		if (it == mChildren.end())
		{
			mChildren.push_back(child);
		}
	}

	void UIObject::SetID(const std::string& id)
	{
		mID = id;
	}
}