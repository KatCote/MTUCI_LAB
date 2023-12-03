#include <math.h>

// First solution
bool Resh1(double x, double y)
{
	if
	(
		(sqrt((x*x) + (y*y)) <= 1) ||
		( -3 <= x && x <= 3 && y == 0 ) ||
		( -3 <= y && y <= 3 && x == 0 ) ||
		( -1 * sqrt(8) <= x && x <= sqrt(8) && x==y ) ||
		( -1 * sqrt(8) <= x && x <= sqrt(8) && x==(-1 * y) )
	) 
	{ return true; }
	
	return false;
}

// Second solution
bool Resh2(double x, double y)
{
	return
	(
		( sqrt((x*x) + (y*y)) <= 1 ) ||
		( -3 <= x && x <= 3 && y == 0 ) ||
		( -3 <= y && y <= 3 && x == 0 ) ||
		( -1 * sqrt(8) <= x && x <= sqrt(8) && x==y ) ||
		( -1 * sqrt(8) <= x && x <= sqrt(8) && x==(-1 * y) )
	);
}
