#pragma once

class CCommand
{
public:
	CCommand() {}
	virtual ~CCommand() {}

	virtual void executeV() = 0;
};