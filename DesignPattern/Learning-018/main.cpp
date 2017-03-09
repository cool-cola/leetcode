#include "Employee.h"
#include "LeaveRequest.h"

int main()
{
	CProjectLeader obj(20);

	CTeamLeader* pTeamLeader = new CTeamLeader(10);
	CProjectLeader* pProjectLeader = new CProjectLeader(20);
	CHR* pHR = new CHR(30);

	pTeamLeader->setSupervisor(pProjectLeader);
	pProjectLeader->setSupervisor(pHR);
	
	pTeamLeader->approveLeave(new CLeaveRequest(5, NORMAL));
	pTeamLeader->approveLeave(new CLeaveRequest(5, TEAM_LEADER));

	return 0;
}