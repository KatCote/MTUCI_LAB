#include <iostream>
using namespace std;

void GetData(double& x, double& y, double& z);
void PutData(double R, int N);
double Razv(double x, double y, double z, int& n);
double Razm(double x, double y, double z, int& n);

int main()
{
	double x, y, z, r;
	int n, choise;
	
	cout << '\n';
	GetData(x, y, z);

	cout
		<< "\nChoose a solution method:"
		<< "\n [1] without additional functions min and max"
		<< "\n [2] with own functions min and max"
		<< "\n [any] exit"
		<< "\n\nChoise: ";

	cin >> choise;

	switch(choise)
	{
		case 1:
			r = Razv(x, y, z, n);
			break;
		case 2:
			r = Razm(x, y, z, n);
			break;
		default:
			cout << "\nWrong answer, exit\n";
			return 0;
	}

	PutData(r, n);

	return 0;	
}
