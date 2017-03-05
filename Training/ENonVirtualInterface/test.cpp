#include <iostream>

class CGameCharacter
{
public:
	CGameCharacter() : m_HealthVal(0) {}
	//CGameCharacter(int vVal) { m_HealthVal = vVal; }

	int healthValue() const
	{
		int retVal = __doHealthValueV();

		return retVal;
	}

private:
	int m_HealthVal;

	virtual int __doHealthValueV() const //derived class可重写定义它
	{
		return m_HealthVal;
	}
};

class CDemaCharacter : public CGameCharacter
{
public:
	CDemaCharacter() : m_DemaHealthVal(1) {}

	int getDemaHealthVal()
	{
		int retVal = healthValue();

		return retVal;
	}

private:
	int m_DemaHealthVal;

	virtual int  __doHealthValueV() const
	{
		return m_DemaHealthVal;
	}
};

int main()
{
	CDemaCharacter Dema;
	std::cout << Dema.getDemaHealthVal() << std::endl;

	CGameCharacter *pGame;
	CDemaCharacter Dema1;

	pGame = &Dema1;
	std::cout << pGame->healthValue() << std::endl;

	return 0;
}