#include"Header.h"
#include <iostream>


void FillArr(int& n, int*& arr) {
	std::cout << "������� �������� ����� � ����� �������?" << std::endl;
	std::cin >> n;
	if (n % 2 == 1) {
		throw "���������� �������� ������ �������� �� ���";
	}
	arr = new int[n];
	std::cout << "������� ��� ������" << std::endl;
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
	std::cout << "��� ����� ������ ��������� �� ���������: " << std::endl;
	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << ' ';
	}
}