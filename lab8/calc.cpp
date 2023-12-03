#include <iostream>
#include <math.h>
using namespace std;

double Funy(double x)
{
	return x - 0.5*(sin(x*x)-1);
}

double FProiz(double x)
{
	return 1 - x*cos(x*x);
}

double Kop(double x0, double E, int nMax, double& y, int& i)
{
	double a, x;
	i = 0;
	x = x0;
	
	cout << "\nCalculating the root of the equation:\n"
		<< "\n\tIteration\tApproximation X\n"
		<< "-------------------------------------------------\n";
	cout << "\t" << i << "\t\t" << x << "\n";

	do
	{
		a = x;
		x = a - Funy(a) / FProiz(a);
		i++;
		cout << "\t" << i << "\t\t" << x << "\n";
	}
	while (abs(x-a) >= E && i < nMax);

	y = Funy(x);

	return x;
}
