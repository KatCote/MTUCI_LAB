#include "global.h"

double hcl(double R)
{
	double res = R * M_PI;

	return res;
}

void lab4()
{ std::cout <<
	"Result: " <<
	hcl(3) +
	hcl(2) +
	hcl(2.5) +
	hcl(1) <<
	'\n';
}


