#include "stdafx.h"
#include "UIRectangleShape.h"

namespace FG
{
	UIRectangleShape::UIRectangleShape() : UIRectangleShape(0, 0, 0, 0)
	{

	}
	UIRectangleShape::UIRectangleShape(int x, int y) : UIRectangleShape(x, y, 0, 0)
	{

	}
	UIRectangleShape::UIRectangleShape(int x, int y, int width, int height) : UI2DShape(x, y), mWidth(width), mHeight(height)
	{
	}
	UIRectangleShape::~UIRectangleShape()
	{

	}

	bool UIRectangleShape::IsInner(int x, int y) const
	{
		if (x - GetX() <= GetWidth()
			&& y - GetY() <= GetHeight())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void UIRectangleShape::SetWidth(int width)
	{
		mWidth = width;
	}
	void UIRectangleShape::SetHeight(int height)
	{
		mHeight = height;
	}
	void UIRectangleShape::SetForm(int width, int height)
	{
		SetWidth(width);
		SetHeight(height);
	}

	int UIRectangleShape::GetWidth() const
	{
		return mWidth;
	}
	int UIRectangleShape::GetHeight() const
	{
		return mHeight;
	}
}