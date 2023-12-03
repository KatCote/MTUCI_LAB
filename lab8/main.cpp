#include <iostream>
using namespace std;

double Kop(double x0, double E, int nMax, double& y, int& i);
void GetData(double& x, double& E, int& nMax);
void PutData(double x, double y, int n);

int main()
{
	double x0 = -0.25, E = 0.0001, x, y;	
	int n, nMax = 100;

	GetData(x0, E, nMax);

	x = Kop(x0, E, nMax, y, n);

	PutData(x, y, n);

	return 0;
}
