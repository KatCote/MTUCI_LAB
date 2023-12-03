#include <iostream>
using namespace std;

void GetData(double& x, double& y);
void PutData(bool res, double x, double y);
bool Resh1(double x, double y);
bool Resh2(double x, double y);

int main()
{
	double x, y;
	bool a, b;

	cout << "\n----------\n";
	
	GetData(x, y);
	a = Resh1(x, y);
	cout << "First solution:\n";	
	PutData(a, x, y);

	GetData(x, y);
	b = Resh2(x, y);
	cout << "Second solution:\n";	
	PutData(b, x, y);

	return 0;
}
