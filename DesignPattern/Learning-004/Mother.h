#include "Publication.h"

class CMother
{
public:
	void read(CPublication *vPublication)
	{
		std::cout << "Mother is reading: ";
		vPublication->getContentV();
	}
};