#pragma once
#include "LeaveRequest.h"
#include <iostream>

class CEmployee
{
public:
	CEmployee() : m_pSupervisor(NULL) {}
	virtual ~CEmployee() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const = 0;

	void setSupervisor(const CEmployee* vSupervisor) { m_pSupervisor = vSupervisor; }
	
	const CEmployee* getSupervisor() const { return m_pSupervisor; }

private:
	const CEmployee* m_pSupervisor;
};

class CTeamLeader : public CEmployee
{
public:
	CTeamLeader() {}
	virtual ~CTeamLeader() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const override
	{
		if (vLeaveRequest->getLeaveDays() < 10)
		{
			std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
				" days has been approved by team leader!\n";
		} 
		else
		{
			if (getSupervisor())
			{
				getSupervisor()->approveLeaveV(vLeaveRequest);
			}
			else
			{
				std::cout << "The only way to get " << vLeaveRequest->getLeaveDays()
					<< " days leave is to quit the company!\n";
			}
		}
	}
};

class CProjectLeader : public CEmployee
{
public:
	CProjectLeader() {}
	virtual ~CProjectLeader() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const override
	{
		if (vLeaveRequest->getLeaveDays() < 20)
		{
			std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
				" days has been approved by project leader!\n";
		}
		else
		{
			if (getSupervisor())
			{
				getSupervisor()->approveLeaveV(vLeaveRequest);
			}
			else
			{
				std::cout << "The only way to get " << vLeaveRequest->getLeaveDays()
					<< " days leave is to quit the company!\n";
			}
		}
	}
};

class CHR : public CEmployee
{
public:
	CHR() {}
	virtual ~CHR() {}

	virtual void approveLeaveV(const CLeaveRequest* vLeaveRequest) const override
	{
		if (vLeaveRequest->getLeaveDays() < 30)
		{
			std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
				" days has been approved by HR!\n";
		}
		else
		{
			if (getSupervisor())
			{
				getSupervisor()->approveLeaveV(vLeaveRequest);
			}
			else
			{
				std::cout << "The only way to get " << vLeaveRequest->getLeaveDays()
					<< " days leave is to quit the company!\n";
			}
		}
	}
};