// math_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector3.h>
#include <iostream>

typedef math::Vector3 Vector3;

int main()
{
	Vector3 v(-87, 100, 10);
	Vector3 v1(8, 32, 453);

	std::cout << "v: " << v << std::endl;
	std::cout << "v1: " << v1 << std::endl;
	std::cout << "magnitude of v: " << v.magnitude() << std::endl;
	std::cout << "magnitude of v1: " << v1.magnitude() << std::endl;
	std::cout << "Dot: " << v * v1 << std::endl;
	std::cout << "V and scalar 4: " << v * 4.0f << std::endl;
	std::cout << "Addition: " << v + v1 << std::endl;
	std::cout << "Subtraction: " << v - v1 << std::endl;
	std::cout << "Cross: " << v.cross_product(v1) << std::endl;

	system("PAUSE");

    return 0;
}

