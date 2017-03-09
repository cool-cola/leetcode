#pragma once
#include "LeaveRequest.h"
#include <iostream>
#include <string>

class CEmployee
{
public:
	CEmployee() : m_pSupervisor(NULL), m_MaxApproveDays(0), m_EmployeeLevel(NORMAL) {}
	virtual ~CEmployee() {}

	virtual void f() { std::cout << 1; }

	void approveLeave(const CLeaveRequest* vLeaveRequest) const
	{
		if (_canHandleV(vLeaveRequest))
		{
			std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() 
				<< " days from level " << vLeaveRequest->getRequesterLevel() 
				<< " has been approved by " << m_Name.c_str() << std::endl;
		}
		else
		{
			if (m_pSupervisor)
			{
				m_pSupervisor->approveLeave(vLeaveRequest);
			} 
			else
			{
				std::cout << "The leave request of " << vLeaveRequest->getLeaveDays() 
					<< " days leave is to quit the company!\n";
			}
		}
	}

	void setSupervisor(const CEmployee* vSupervisor) { m_pSupervisor = vSupervisor; }
	
	const CEmployee* getSupervisor() const { return m_pSupervisor; }
	int getMaxApproveDays()          const { return m_MaxApproveDays; }
	enumEmployee getRequesterLevel() const { return m_EmployeeLevel; }

protected:
	void _setMaxApproveDays(int vDays) { m_MaxApproveDays = vDays; }
	void _setName(const std::string& vName) { m_Name = vName; }
	void _setEmployeLevel(enumEmployee vRequesterLevel) { m_EmployeeLevel = vRequesterLevel; }

	virtual bool _canHandleV(const CLeaveRequest* vLeaveRequest) const
	{
		return ((vLeaveRequest->getLeaveDays() < m_MaxApproveDays)
			&& (vLeaveRequest->getRequesterLevel() < m_EmployeeLevel));
	}

private:
	const CEmployee* m_pSupervisor;
	std::string m_Name;
	int m_MaxApproveDays;
	enumEmployee m_EmployeeLevel;
};

class CTeamLeader : public CEmployee
{
public:
	CTeamLeader() {}
	CTeamLeader(int vMaxApproveDays)
	{
		_setName("Team Leader");
		_setMaxApproveDays(vMaxApproveDays);
		_setEmployeLevel(TEAM_LEADER);
	}

	virtual ~CTeamLeader() {}
};

class CProjectLeader : public CEmployee
{
	int a;
public:
	CProjectLeader() {}
	CProjectLeader(int vMaxApproveDays)
	{
		_setName("Project Leader");
		_setMaxApproveDays(vMaxApproveDays);
		_setEmployeLevel(PROJECT_LEADER);
	}

	virtual ~CProjectLeader() {}

	virtual void f() { std::cout << 2; }

protected:
	virtual bool _canHandleV(const CLeaveRequest* vLeaveRequest) const override
	{
		if (vLeaveRequest->getRequesterLevel() == TEAM_LEADER) return false;
		return ((vLeaveRequest->getLeaveDays() < getMaxApproveDays())
			&& (vLeaveRequest->getRequesterLevel() < getRequesterLevel()));
	}
};

class CHR : public CEmployee
{
public:
	CHR() {}
	CHR(int vMaxApproveDays)
	{
		_setName("HR");
		_setMaxApproveDays(vMaxApproveDays);
		_setEmployeLevel(HR);
	}

	virtual ~CHR() {}
};