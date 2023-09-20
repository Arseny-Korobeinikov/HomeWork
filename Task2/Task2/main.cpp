#include "Vector.h"
#include <iostream>


int main() {
	Vec::TVector a, b;
	std::cin >> a >> b;
	std::cout << a + b << ' ' << a - b << std:: endl;
	float l = a * b;
	float s = a.Cos(b);
	std::cout << l<< " "<< s;
	return 0;
} 