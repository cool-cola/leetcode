#pragma once

enum enumEmployee
{
	NORMAL = 0,
	TEAM_LEADER,
	PROJECT_LEADER,
	HR
};

class CLeaveRequest
{
public:
	CLeaveRequest() {}
	CLeaveRequest(int vDays, enumEmployee vLevel) : m_LeaveDays(vDays), m_RequesterLevel(vLevel) {}
	~CLeaveRequest() {}

	enumEmployee getRequesterLevel() const { return m_RequesterLevel; }
	int getLeaveDays() const { return m_LeaveDays; }

private:
	enumEmployee m_RequesterLevel;
	int m_LeaveDays;
};