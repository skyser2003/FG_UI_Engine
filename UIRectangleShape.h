#pragma once

#include "UI2DShape.h"

namespace FG
{
	class UIRectangleShape : public UI2DShape
	{
	public:
		UIRectangleShape();
		UIRectangleShape(int x, int y);
		UIRectangleShape(int x, int y, int width, int height);
		virtual ~UIRectangleShape();

		virtual bool IsInner(int x, int y) const;

		void SetWidth(int width);
		void SetHeight(int height);
		void SetForm(int width, int height);

		int GetWidth() const;
		int GetHeight() const;
	private:
		int mWidth, mHeight;
	};
}