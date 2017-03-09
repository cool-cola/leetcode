#pragma once

class CLeaveRequest
{
public:
	CLeaveRequest() {}
	CLeaveRequest(int vLeaveDays) { m_LeaveDays = vLeaveDays; }
	~CLeaveRequest() {}

	int getLeaveDays() const { return m_LeaveDays; }

private:
	int m_LeaveDays;
};