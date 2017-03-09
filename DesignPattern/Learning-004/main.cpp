#include "Mother.h"

int main()
{
	CMother Mother;

	Mother.read(new CBook);
	Mother.read(new CNewpaper);

	return 0;
}