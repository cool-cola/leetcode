#pragma once
#include <string>

class CCar
{
public:
	CCar() {}
	virtual ~CCar() {}

	virtual void driverV() {}

	void setCarCreationSig(const std::string& vSig)
	{
		m_CarCreationSig = vSig;
	}

private:
	std::string m_CarCreationSig;
};