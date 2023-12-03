#include <iostream>
#include <math.h>
using namespace std;

float f(float x, float y);

void RegCikl2(float a, float b, float h1, float c, float d, float h2, float& nMin)
{
	nMin = 3.40282e+038;

	cout << "\n\tX\tY\tZ";
	cout << "\n-----------------------------------\n";

	for (float x = a; x <= b; x = x + h1)
	{
		for (float y = c; y <= d; y = y + h2)
		{
			float z = f(x, y);
			if ( z < nMin ) { nMin = z; }

			cout << "\t" << x << "\t" << y << "\t" << z << "\n";
		}
	}	
}

float f(float x, float y)
{
	return sin(x*x) + pow(cos(x), 3) - 0.1 + y;
}
