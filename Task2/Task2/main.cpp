#include "Vector.h"
#include <iostream>


int main() {
	Vec:: TVector a = { 1,12,1 }, b = { 1,2,1 };
	float l = a * b;
	float s = a.Cos(b);
	std::cout << l<< " "<< s;
}