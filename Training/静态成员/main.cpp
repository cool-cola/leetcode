
#include <iostream>

enum weekday {MON, TUE, WED, THU, FRI};

class CTest
{
public:
	CTest() {}
	~CTest() {}

	static void writeTest(int vMember)
	{
		CTest::m_Member = vMember;
		std::cout << "The static member is " << m_Member << std::endl;
	}

	static void display(int vCount)
	{
		std::cout << "The count number is " << vCount << std::endl;
	}

	void readTest(int vMember)
	{
		CTest::writeTest(vMember);
		display(8);
	}

private:
	int m_SubMember;
	static int m_Member;

	static const int Number = 0;
	static const weekday today = MON;
};

int CTest::m_Member = 0;

int main()
{
	int Member = 2;
	CTest Obj;
	Obj.readTest(Member);

	return 0;
}