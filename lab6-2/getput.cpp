#include <iostream>
using namespace std;

void GetData(double& x, double& y, double& z)
{
	cout << "Input X: ";
	cin >> x;

	cout << "Input Y: ";
	cin >> y;

	cout << "Input Z: ";
	cin >> z;
}

void PutData(double R, int N)
{
	cout << "\nResult R: " << R;
	cout << "\nCurrent branch: " << N;
	cout << "\n";
}
