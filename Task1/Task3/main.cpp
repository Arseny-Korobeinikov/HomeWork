#include "Header.h"
#include<iostream>
#include "ioarray.h"

int main() {
	int n = 0, new_n = 0;
	int* arr = new int[0];
	int* new_arr = new int[0];

	setlocale(LC_ALL, "ru");
	IOArr::FillArr(n, arr);
	new_arr = ChangeArr(n, arr,new_n);
	IOArr::OutputArr(new_n, new_arr);

	return 0;
}