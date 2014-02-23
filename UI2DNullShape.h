#pragma once

#include "UI2DShape.h"

namespace FG
{
	class UI2DNullShape final : public UI2DShape
	{
	public:
		bool IsInner(int x, int y) const;
	private:
	};
}