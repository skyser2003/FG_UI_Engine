#include "stdafx.h"
#include "UI3DObject.h"

namespace FG
{
	UI3DObject::UI3DObject() : UI3DObject(0, 0, 0)
	{

	}
	UI3DObject::UI3DObject(int x, int y, int z) : mX(x), mY(y), mZ(z)
	{

	}
	UI3DObject::~UI3DObject()
	{

	}

	void UI3DObject::Update(float dt)
	{

	}

	void UI3DObject::SetX(int x)
	{
		mX = x;
	}
	void UI3DObject::SetY(int y)
	{
		mY = y;
	}
	void UI3DObject::SetZ(int z)
	{
		mZ = z;
	}
	void UI3DObject::SetPosition(int x, int y, int z)
	{
		SetX(x);
		SetY(y);
		SetZ(z);
	}

	int UI3DObject::GetX() const
	{
		return mX;
	}
	int UI3DObject::GetY() const
	{
		return mY;
	}
	int UI3DObject::GetZ() const
	{
		return mZ;
	}
}