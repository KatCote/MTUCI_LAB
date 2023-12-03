#include <iostream>
using namespace std;

void GetData(float& a, float& b, float& h1, float& c, float& d, float& h2)
{
	cout << "\nInput A: ";
	cin >> a;

	cout << "Input B: ";
	cin >> b;

	cout << "Input H1: ";
	cin >> h1;
	
	cout << "\nInput C: ";
	cin >> c;
	
	cout << "Input D: ";
	cin >> d;
	
	cout << "Input H2: ";
	cin >> h2;
}

void PutData(float nMin)
{
	cout << "\nResult nMin: " << nMin << "\n";
}
