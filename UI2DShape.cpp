#include "stdafx.h"
#include "UI2DShape.h"

namespace FG
{
	UI2DShape::UI2DShape() : UI2DShape(0, 0)
	{

	}
	UI2DShape::UI2DShape(int x, int y) : mX(x), mY(y)
	{

	}

	void UI2DShape::SetX(int x)
	{
		mX = x;
	}
	void UI2DShape::SetY(int y)
	{
		mY = y;
	}
	void UI2DShape::SetPosition(int x, int y)
	{
		SetX(x);
		SetY(y);
	}

	int UI2DShape::GetX() const
	{
		return mX;
	}
	int UI2DShape::GetY() const
	{
		return mY;
	}
}