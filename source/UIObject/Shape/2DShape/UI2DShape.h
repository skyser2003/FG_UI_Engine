#include "UIObject/Shape/UIShape.h"

namespace FG
{
	class UI2DShape : public UIShape
	{
	public:
		UI2DShape();
		UI2DShape(int x, int y);
		virtual ~UI2DShape() = 0 {}
		
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