#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES

short int LAB_NUM = 3; // Select the lab. work

void func3 (double x, double y, double& z)
{
	double buf_1 = (3 * y) - x;
	double buf_2 = x * sin(y * y);
	z = (M_PI/3) + log(pow(x, 3));
	z = (z/buf_1) + buf_2;
}

int main ()
{
	if (LAB_NUM == 3)
	{
		double x = 8.8, y = 5.8, z = 0;

		std::cout << " Input x = ";
		std::cin >> x;
		std::cout << "\n" << " Input y = ";
		std::cin >> y;

		func3(x,y,z);
		std::cout << "\n" << " Result z = " << z << "\n";
	}

	if (LAB_NUM == 2)
	{
		double f, buf_1, buf_2;
		float x = 8.8, y = 5.8;
		int k, m, n, i;
		
		buf_1 = (3 * y) - x;
		buf_2 = x * sin(y * y);
		f = (M_PI/3) + log(pow(x, 3));
		f = f/buf_1 + buf_2;

		k = f;
		i = ceil(f);
		m = floor(f);
		n = static_cast<int>(f);

		std::cout << "Result (f) = " << f << "\n";
		std::cout << "i = " << i << "\n";
		std::cout << "m = " << m << "\n";
		std::cout << "k = " << k << "\n";
		std::cout << "n = " << n << "\n";
		std::cout << "++k = " << ++k << "\n";
		std::cout << "n++ = " << n++ << "\n";
		std::cout << "k after ++k = " << k << "\n";
		std::cout << "n after n++ = " << n << "\n";

	}

	// Lecture 19.09.2023
	if (LAB_NUM == -1)
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
