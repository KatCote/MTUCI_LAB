#include <iostream>

int LAB_NUM = 2; // Select the lab. work

int main ()
{
	if (LAB_NUM == 2)
	{
		int a, b, c;
		float D;

		std::cout << "\tInput 3 nums\n\n"
			<< "First num (A): ";
		std::cin >> a;
		std::cout << "\nSecond num (B): ";
		std::cin >> b;
		std::cout << "\nThird num (C): ";
		std::cin >> c;

		//std::cout << "\n\n" << a << "x^2 " << b << "x " << c << "\n";

		if (a == 0) {
			std::cout << "\nA cant be zero!\n";
			return -1;
		} else if (a == b) {
			std::cout << "\nA cant be equal B!\n";
			return -1;
		} else {
			D = (b^2) - (4 * (a * c));
			std::cout << "\nD: " << D << "\n";
		}

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
