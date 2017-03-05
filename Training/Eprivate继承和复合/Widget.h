#pragma once
#include "Time.h"

//��private��ʽ�̳�timer,ע��̳�����virtual�������дΪprivate����д
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