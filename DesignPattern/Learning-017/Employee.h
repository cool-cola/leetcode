#pragma once
#include "LeaveRequest.h"
#include <iostream>
#include <string>

class CEmployee
{
public:
	CEmployee() : m_pSupervisor(NULL), m_MaxApproveDays(0) {}
	~CEmployee() {}

	void approveLeave(const CLeaveRequest* vLeaveRequest) const
	{
		if (vLeaveRequest->getLeaveDays() < m_MaxApproveDays)
		{
			std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
				" days have been approved by " << m_Name.c_str() << std::endl;
		} 
		else
		{
			if (m_pSupervisor)
			{
				m_pSupervisor->approveLeave(vLeaveRequest);
			}
			else
			{
				std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() <<
					" days leave is to quit the company!\n";
			}
		}
	}

	void setSupervisor(const CEmployee* vSupervisor) { m_pSupervisor = vSupervisor; }
	const CEmployee* getSupervisor() const { return m_pSupervisor; }

protected:
	void _setName(const std::string& vName) { m_Name = vName; }
	void _setMaxApproveDays(int vDays) { m_MaxApproveDays = vDays; }

private:
	const CEmployee* m_pSupervisor;
	std::string m_Name;
	int m_MaxApproveDays;
};

class CTeamLeader : public CEmployee
{
public:
	CTeamLeader() {}
	CTeamLeader(int vMaxApproveDays)
	{
		_setName("team leader");
		_setMaxApproveDays(vMaxApproveDays);
	}

	~CTeamLeader() {}
};

class CProjectLeader : public CEmployee
{
public:
	CProjectLeader() {}
	CProjectLeader(int vMaxApproveDays)
	{
		_setName("project leader");
		_setMaxApproveDays(vMaxApproveDays);
	}

	~CProjectLeader() {}
};

class CHR : public CEmployee
{
public:
	CHR() {}
	CHR(int vMaxApproveDays)
	{
		_setName("HR");
		_setMaxApproveDays(vMaxApproveDays);
	}

	~CHR() {}
};