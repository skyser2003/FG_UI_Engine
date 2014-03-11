#pragma once

#include "UIObject/UIObject.h"

namespace FG
{
	class UI2DShape;

	class UI2DObject : public UIObject
	{
	public:
		UI2DObject();
		virtual ~UI2DObject() = 0;

		virtual void Update(int dt) override;

		virtual bool IsInner(int x, int y) const = 0;

		void SetShape(UI2DShape* shape);

		void SetX(int x);
		void SetY(int y);
		void SetPosition(int x, int y);

		int GetX() const;
		int GetY() const;
	private:
		void DeleteShape();

		UI2DShape* mShape;
	};
}