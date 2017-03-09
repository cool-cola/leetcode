#include "Employee.h"
#include "LeaveRequest.h"

int main()
{
	CTeamLeader *pTeamLeader = new CTeamLeader;
	CProjectLeader *pProjectLeader = new CProjectLeader;
	CHR *pHR = new CHR;

	CLeaveRequest *pLeaveRequest = new CLeaveRequest(25);

	if (pLeaveRequest->getLeaveDays() < 10)
	{
		pTeamLeader->approveLeaveV(pLeaveRequest);
	} 
	else
	{
		if (pLeaveRequest->getLeaveDays() < 20)
		{
			pProjectLeader->approveLeaveV(pLeaveRequest);
		} 
		else
		{
			if (pLeaveRequest->getLeaveDays() < 30)
			{
				pHR->approveLeaveV(pLeaveRequest);
			} 
			else
			{
				std::cout << "The only way to get " << pLeaveRequest->getLeaveDays()
					<< " days leave is to quit the company!\n";
			}
		}
	}

	return 0;
}