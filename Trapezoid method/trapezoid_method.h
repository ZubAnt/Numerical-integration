#ifndef TRAPEZIOD_METHOD_H
#define TRAPEZIOD_METHOD_H  

namespace Integral
{
	double trapesiod_method(double (*func)(double), double a, double b, unsigned int n);
}

namespace Square
{
	double trapezium(double a, double b, double h);
}

#endif // TRAPEZIOD_METHOD_H