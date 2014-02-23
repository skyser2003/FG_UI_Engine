#include "stdafx.h"
#include "UI2DObject.h"

#include "UI2DNullShape.h"

namespace FG
{
	UI2DObject::UI2DObject() : mShape(new UI2DNullShape)
	{

	}
	UI2DObject::~UI2DObject()
	{
		DeleteShape();
	}

	void UI2DObject::Update(int dt)
	{

	}

	void UI2DObject::SetShape(UI2DShape* shape)
	{
		DeleteShape();
		mShape = shape;
	}

	void UI2DObject::SetX(int x)
	{
		mShape->SetX(x);
	}
	void UI2DObject::SetY(int y)
	{
		mShape->SetY(y);
	}
	void UI2DObject::SetPosition(int x, int y)
	{
		SetX(x);
		SetY(y);
	}

	int UI2DObject::GetX() const
	{
		return mShape->GetX();
	}
	int UI2DObject::GetY() const
	{
		return mShape->GetY();
	}

	void UI2DObject::DeleteShape()
	{
		if (mShape)
		{
			delete mShape;
			mShape = nullptr;
		}
	}
}