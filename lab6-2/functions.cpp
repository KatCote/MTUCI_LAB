#include <math.h>

double Razv(double x, double y, double z, int& n)
{
	double b = y, c = z;
	double r = 0, r1 = 0, r2 = 0;

	if (x > 3)
	{
		n = 2;
		r = b - ( c * ( x*x ) );
		r1 = exp(x);

		if ( r1 > r ) { r = r1; }
	}
	else if (x < -3)
	{
		n = 1;
		r = sqrt(abs(c));
		r1 = sqrt(abs(x));

		if ( r1 > r ) { r = r1; }

		r1 = b * ( x*x );
		r2 = c * ( x*x*x );

		if ( r1 < r ) { r = r1; }
		if ( r2 < r ) { r = r2; }
	}
	else
	{
		n = 3;
		r = atan( (b*b) / ( ( c*c ) + (x*x) ) );
	}

	return r;
}

double minMy(double x, double y);
double maxMy(double x, double y);

double Razm(double x, double y, double z, int& n)
{
	double b = y;
	double c = z;
	double r = 0;

	if (x > 3)
	{
		n = 2;
		return maxMy( b - ( c * ( x*x ) ), exp(x) );
	}
	else if (x < -3)
	{
		n = 1;
		return minMy( b * ( x*x ), minMy (c * ( x*x*x ), maxMy( sqrt(abs(c)), sqrt(abs(x)) )) );
	}
	else
	{
		n = 3;
		return atan( ( b*b ) / ( ( c*c ) + ( x*x ) ) );
	}
}

double minMy(double x, double y)
{
	if (x > y) { return y; }
	else { return x; }
}

double maxMy(double x, double y)
{
	if (x < y) { return y; }
	else { return x; }
}
