#include"Header.h"
#include <iostream>


void FillArr(int& n, int*& arr) {
	std::cout << "Сколько символов будет в вашем массиве?" << std::endl;
	std::cin >> n;
	if (n % 2 == 1) {
		throw "Количество символов должно делиться на два";
	}
	arr = new int[n];
	std::cout << "Введите ваш массив" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
}



void  ChangeArr(int n, int* arr) {
	int tmp = 0;
	for (int i = 0; i < n / 2; ++i) {
		tmp = arr[i];
		arr[i] = arr[n / 2 + i];
		arr[n / 2 + i] = tmp;
	}
}

void OutputArr(int n, int* arr) {
	std::cout << "Вот какой массив получился из исходного: " << std::endl;
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << ' ';
	}
}