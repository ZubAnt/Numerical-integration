#ifndef TRAPEZIOD_METHOD_H
#define TRAPEZIOD_METHOD_H  

namespace Integral
{
	// integrand - подынтегральное выражение
	// a - начло интегрирования
	// b - конец интегрирования
	// n - количество разбиений отрезка
	double trapesiod_method(double (*integrand)(double), double a, double b, unsigned int n);
}

namespace Square
{
	double trapezium(double a, double b, double h);
}

#endif // TRAPEZIOD_METHOD_H