#include <iostream>
using namespace std;

void RegCikl2(float a, float b, float h1, float c, float d, float h2, float& nMin);
void GetData(float& a, float& b, float& h1, float& c, float& d, float& h2);
void PutData(float nMin);

int main()
{
	float a = -3, b = 3, h1 = 0.6, c = 1, d = 2, h2 = 0.1;
	float nMin;

	GetData(a, b, h1, c, d, h2);

	RegCikl2(a, b, h1, c, d, h2, nMin);

	PutData(nMin);

	return 0;
}
