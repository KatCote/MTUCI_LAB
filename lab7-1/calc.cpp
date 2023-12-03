#include <iostream>
#include <math.h>
using namespace std;

float func(float x);

void RegCikl(float a, float b, float h, float& multiPos)
{
	multiPos = 1;

	cout << "\n\t| X" << "\t\t| Y";
	cout << "\n---------------------------------------\n";

	for (float i = a; i <= b; i = i + h)
	{
		float y = func(i);
		if ( y > 0 ) { multiPos = multiPos * y; }
		cout << "\t| " << i << "\t\t| " << y << "\n";
	}
}

float func(float x)
{
	if ( x > 5 ) { return 2 * sin(x); }
	else if ( 0 <= x && x <= 5 ) { return 5 * exp(x); }
	else { return x; }
}
