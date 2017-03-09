#include "LeaveRequest.h"
#include "Employee.h"

int main()
{
	CTeamLeader *pTeamLeader = new CTeamLeader;
	CProjectLeader *pProjectLeader = new CProjectLeader;
	CHR *pHR = new CHR;

	pTeamLeader->setSupervisor(pProjectLeader);
	pProjectLeader->setSupervisor(pHR);

	pTeamLeader->approveLeaveV(new CLeaveRequest(35));

	return 0;
}