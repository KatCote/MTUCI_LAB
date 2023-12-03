#include <iostream>
using namespace std;

void GetData(double& x, double& y)
{
	cout << "\nEnter the X coordinate: ";
	cin >> x;

	cout << "Enter the Y coordinate: ";
	cin >> y;

	cout << '\n';
}

void PutData(bool res, double x, double y)
{
	cout << "\nThe point by coordinates (X: " << x << "; Y: " << y << ")"
	<< "\nhits the specified area: ";

	if ( res == 1 ) { cout << "[YES]"; }
	else { cout << "[NO]"; }
	cout << "\n\n----------\n";
}
