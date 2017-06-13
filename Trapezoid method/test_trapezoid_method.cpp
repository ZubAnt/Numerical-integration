#include "trapezoid_method.h"
#include <cmath>
#include <iostream>
#include <stdexcept>

double integrand(double x)
{
	return pow(x, 5) - 6 * pow(x, 4) + 5 * pow(x, 3) - 30 * pow(x, 2) + 5 * x - 30;
}

double test_integrand(double x)
{
	return x * x;
}

int main()
{

	try
	{
		double integral = 0.0;
		integral = Integral::trapesiod_method(&integrand, 0, 100, 100);
		std::cout << "integral = " << integral << std::endl;

		integral = Integral::trapesiod_method(&test_integrand, 0, 10, 100);
		std::cout << "integral = " << integral << std::endl;
	}
	catch(std::invalid_argument &err)
	{
		std::cout << err.what() << std::endl;
		return -1;
	}

	return 0;
}