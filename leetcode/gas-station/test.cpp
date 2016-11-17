#include <vector>
#include <iostream>
#include <ctime>
#include <cstdio>

class CSolution
{
public:
	int canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost) {
		int SizeStation = gas.size();
		//int StartStation = Random(0, SizeStation-1);
		
		int StartStation = 0;
		bool Ok;
		while (StartStation < SizeStation)
		{
			int CurGas = 0;
			for (int i=StartStation, Count=0; Count<SizeStation; ++Count, ++i)
			{
				if (i >= SizeStation) i %= SizeStation;

				CurGas += gas[i];
				if (CurGas >= cost[i]) 
				{
					CurGas -= cost[i];
					Ok = true;
				}
				else 
				{
					Ok = false;
					break;
				}
			}
			if (Ok) 
			{
				return StartStation;
				break;
			}

			StartStation++;
		}

		return -1;
	}

	int Random(int vStart, int vEnd)
	{
		unsigned int seed = (unsigned)time(NULL);
		srand(seed++);
		return vStart+rand()%(vEnd-vStart+1);
	}
};

int main()
{
	std::vector<int> Gas;
	std::vector<int> Cost;

	Gas.push_back(2);
	Gas.push_back(4);


	Cost.push_back(3);
	Cost.push_back(4);


	CSolution obj;
	std:: cout << obj.canCompleteCircuit(Gas, Cost) << std::endl;
	
	return 0;
}