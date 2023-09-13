#include "ioarray.h"
#include<iostream>

namespace IOArr {


	void FillArrParityControl(int& n, int*& arr) {
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

	void FillArr(int& n, int*& arr) {
		std::cout << "������� �������� ����� � ����� �������?" << std::endl;
		std::cin >> n;
		arr = new int[n];
		std::cout << "������� ��� ������" << std::endl;
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}
	}




	void OutputArr(int n, int* arr) {
		std::cout << "��� ����� ������ ��������� �� ���������: " << std::endl;
		for (int i = 0; i < n; ++i) {
			std::cout << arr[i] << ' ';
		}
	}

}