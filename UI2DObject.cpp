#include "stdafx.h"
#include "UI2DObject.h"

namespace FG
{
	UI2DObject::UI2DObject() : UI2DObject(0, 0)
	{

	}
	UI2DObject::UI2DObject(int x, int y) : mX(x), mY(y)
	{

	}
	UI2DObject::~UI2DObject()
	{

	}

	void UI2DObject::Update(int dt)
	{

	}

	void UI2DObject::SetX(int x)
	{
		mX = x;
	}
	void UI2DObject::SetY(int y)
	{
		mY = y;
	}
	void UI2DObject::SetPosition(int x, int y)
	{
		SetX(x);
		SetY(y);
	}

	int UI2DObject::GetX() const
	{
		return mX;
	}
	int UI2DObject::GetY() const
	{
		return mY;
	}
}