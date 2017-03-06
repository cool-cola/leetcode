#pragma once
#include <iostream>
#include <string>

namespace HWNET
{
	struct SNetworkNode
	{
		unsigned int SourceNodeID;
		unsigned int TargetNodeID;
		unsigned int BandWidth;
		unsigned int NetworkCost;
	};

	struct SCostomerNode
	{
		unsigned int CustomerID;
		unsigned int ConnectNetworkID;
		unsigned int NetworkDemand;
	};

	template<class Type>
	Type stringToNum(const std::string& vString)
	{
		std::istringstream ISS(vString);
		Type Number;
		ISS >> Number;

		return Number;
	}

	class CConfig
	{
	public:
		CConfig();
		~CConfig();

		bool readConfig(const std::string& vFileName);

	private:
		unsigned int m_NetworkNodes;
		unsigned int m_NetworkLinks;
		unsigned int m_CustomerNodes;
		unsigned int m_ValueOfSever;
	};
}