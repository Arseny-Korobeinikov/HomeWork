#include "Header.h"
#include<iostream>






int main() {
	int n = 0;
	int* arr = new int[0];
	setlocale(LC_ALL, "ru");
	try {
	FillArr(n, arr);
	ChangeArr(n, arr);
	OutputArr(n, arr);
	}
	catch (const char* exp) {
		std::cout << exp;
	}
	delete[] arr;
	return 0;
}