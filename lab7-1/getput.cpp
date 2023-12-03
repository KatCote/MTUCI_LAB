#include <iostream>
using namespace std;

void GetData(float& a, float& b, float& h)
{
	cout << "\nInput A: ";
	cin >> a;

	cout << "Input B: ";
	cin >> b;

	cout << "Input H: ";
	cin >> h;
}

void PutData(float multiPos)
{
	cout << "\nResult: " << multiPos << "\n";
}
