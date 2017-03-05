#pragma once
#include "Time.h"

class Widget01
{
public:
	Widget01(int v) : m_Timer(v) {}

	void getTickFrequency() const
	{
		m_Timer.onTick();
	}

private:
	class WidgetTimer : public Timer
	{
	public:
		WidgetTimer(int v) : Timer(v) {}

		virtual void onTick() const override
		{
			std::cout << "Widget01 onTick..." << std::endl;
		}
	};
	WidgetTimer m_Timer;
};