#include <iostream>
using namespace std;

void GetData(double& x, double& E, int& nMax)
{
	cout << "\nInput X0: ";
	cin >> x;

	cout << "Input E: ";
	cin >> E;

	cout << "Input nMax: ";
	cin >> nMax;
}

void PutData(double x, double y, int n)
{
	cout << "\nThe root of the equation is: " << x << "\n";
	cout << "Value of the function is fundamentally equal to: " << y << "\n";
	cout << "The root was found in "<< n <<" iterations" << "\n";
}
