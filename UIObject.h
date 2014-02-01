#pragma once

namespace FG
{
	class UIObject
	{
	public:
		UIObject();
		virtual ~UIObject() = 0;

		virtual void Update(int dt) = 0;
	};
}