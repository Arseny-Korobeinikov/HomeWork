#include "Header.h"
#include<iostream>
#include "ioarray.h"






int main() {
	int n = 0;
	int* arr = new int[0];
	setlocale(LC_ALL, "ru");
	try {
	IOArr:: FillArrParityControl(n, arr);
	ChangeArr(n, arr);
	IOArr:: OutputArr(n, arr);
	}
	catch (const char* exp) {
		std::cout << exp;
	}
	delete[] arr;
	return 0;
}