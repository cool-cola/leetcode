#pragma once
#include "Time.h"

//以private形式继承timer,注意继承来的virtual函数最好写为private来重写
class Widget : private Timer
{
public:
	Widget(int v) : Timer(v) {}

	void getFrequency() const
	{
		onTick();
	}

private:
	virtual void onTick() const override
	{
		std::cout << "Widget onTick..." << std::endl;
	}
};