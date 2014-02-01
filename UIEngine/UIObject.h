#pragma once

namespace FG
{
	class UIObject
	{
	public:
		UIObject();
		virtual ~UIObject() = 0;

		virtual void Update(float dt) = 0;
	};
}