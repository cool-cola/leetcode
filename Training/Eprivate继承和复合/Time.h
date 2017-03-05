#pragma once
#include <iostream>

class Timer
{
public:
	explicit Timer(int tickFrequency) { m_TickFrequency = tickFrequency; }

	virtual void onTick() const
	{
		std::cout << "Timer onTick..." << std::endl;
	}

private:
	int m_TickFrequency;
};