#pragma once
#include "LeaveRequest.h"
#include <iostream>

class CEmployee
{
public:
	CEmployee() {}
	virtual ~CEmployee() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const = 0;
};

class CTeamLeader : public CEmployee
{
public:
	CTeamLeader() {}
	virtual ~CTeamLeader() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const override
	{
		std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
			" days has been approved by team leader!\n";
	}
};

class CProjectLeader : public CEmployee
{
public:
	CProjectLeader() {}
	virtual ~CProjectLeader() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const override
	{
		std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
			" days has been approved by project leader!\n";
	}
};

class CHR : public CEmployee
{
public:
	CHR() {}
	virtual ~CHR() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const override
	{
		std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
			" days has been approved by HR!\n";
	}
};