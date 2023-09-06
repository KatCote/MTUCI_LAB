#include <iostream>

int main ()
{
	int A;
	float B;
	float SUM;

	std::cout << "Input 2 nums"
		<< "\nFirst must be integer:\t";
	std::cin >> A;
	std::cout << "\nSecond can be float:\t";
	std::cin >> B;
	
	SUM = A + B;

	std::cout << "\nSum equals " << SUM << "\n";

	return 0;
}
