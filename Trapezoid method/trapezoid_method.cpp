#include "trapezoid_method.h"
#include <stdexcept>
#include <iostream>

static double mod(double x)
{
	return x > 0.0? x: -x;
}

double Integral::trapesiod_method(double (*integrand)(double), double a, double b, unsigned int n)
{
	if (n == 0)
	{
		throw std::invalid_argument("n must be greater than 0");
	}
	if (b <= a)
	{
		throw std::invalid_argument("b must be greater than a");
	}

	double summ = 0.0;
	double step = (b - a) / n;

	for (double i = a + step; i <= b; i += step)
	{
		double a = integrand(i - step);
		double b = integrand(i);
		double h = step;

		summ += Square::trapezium(a, b, h);
	}

	return summ;
}


double Square::trapezium(double a, double b, double h)
{
	if (h < 0.0)
	{
		throw std::invalid_argument("h must be positive");
	}

	return (a + b) * h / 2; // Площадь трапеции
}