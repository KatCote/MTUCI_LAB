#include <iostream>
using namespace std;

void RegCikl(float a, float b, float h, float& multiPos);
void GetData(float& a, float& b, float& h);
void PutData(float multiPos);

int main()
{
	float a = 2, b = 12, h = 0.5;
	float multiPos;

	GetData(a, b, h);

	RegCikl(a, b, h, multiPos);

	PutData(multiPos);

	return 0;
}
