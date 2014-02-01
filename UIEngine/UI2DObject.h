#pragma once

#include "UIObject.h"

namespace FG
{
	class UI2DObject : public UIObject
	{
	public:
		UI2DObject();
		UI2DObject(int x, int y);
		virtual ~UI2DObject() = 0;

		virtual void Update(float dt) override;

		virtual bool IsInner(int x, int y) const = 0;

		void SetX(int x);
		void SetY(int y);
		void SetPosition(int x, int y);

		int GetX() const;
		int GetY() const;
	private:
		int mX, mY;
	};
}