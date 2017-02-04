// Barycentric.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include "stdafx.h"
struct point {
	float x, y;
};

float impLineEqu(point x, point y, point z) {
	std::cout << '(' << y.y << '-' << z.y << ")*" << x.x << "+(" << z.x << '-' << y.x << ")*" << x.y << "+(" << z.y << '*' << y.x << "-(" << z.x << '*' << y.y << ')' << '\n';
	std::cout << (y.y - z.y) * x.x + (z.x - y.x) * x.y + (z.y*y.x) - (z.x*y.y) << '\n';
	return (y.y - z.y) * x.x + (z.x - y.x) * x.y + (z.y*y.x) - (z.x*y.y);
}
int main()
{
	point A, B, C, P;

	A.x = 6;
	A.y = -3;
	B.x = 1;
	B.y = 2;
	C.x = 5;
	C.y = -4;
	P.x = 2;
	P.y = -1;
	float b = impLineEqu(P, A, C), 
		_B = impLineEqu(B, A, C),
		y = impLineEqu(P, B, A),
		_Y = impLineEqu(C, B, A),
		a = impLineEqu(P, C, B),
		_A = impLineEqu(A, C, B);
	std::cout << '{' << b << '/' << _B << ',';
	std::cout << '{' << y << '/' << _Y << ',';
	std::cout << '{' << a << '/' << _A << '}' << '\n';

	std::cout << '{' << b / _B
		<< ',' << y / _Y
		<< ',' << a / _A << '}';

    return 0;
}

