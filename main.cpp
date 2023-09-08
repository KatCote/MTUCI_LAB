#include <iostream>

int LAB_NUM = 1; // Select the lab. work

int main ()
{
	if (LAB_NUM == 2)
	{
		return 0;
	}

	if (LAB_NUM == 1)
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
}
