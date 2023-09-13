#include"Header.h"
#include <iostream>





void  ChangeArr(int n, int* arr) {
	int tmp = 0;
	for (int i = 0; i < n / 2; ++i) {
		tmp = arr[i];
		arr[i] = arr[n / 2 + i];
		arr[n / 2 + i] = tmp;
	}
}
