#include <iostream>
#include <math.h>

double hcl(double R)
{
	double res = R * M_PI;

	return res;
}

void main()
{ 
	double res = 0;

	res += hcl(3);
	res += hcl(2);
	res += hcl(2.5);
	res += hcl(1);

	std::cout << res << std::endl;
}

