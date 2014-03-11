#pragma once

#include "UIObject/UIObject.h"

namespace FG
{
	class UI3DObject : public UIObject
	{
	public:
		UI3DObject();
		UI3DObject(int x, int y, int z);
		virtual ~UI3DObject() = 0;

		virtual void Update(int dt) override;
		virtual bool IsInner(int x, int y, int z) const = 0;

		void SetX(int x);
		void SetY(int y);
		void SetZ(int z);
		void SetPosition(int x, int y, int z);

		int GetX() const;
		int GetY() const;
		int GetZ() const;
	private:
		int mX, mY, mZ;
	};
}