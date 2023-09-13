#include "Header.h"
#include <iostream>






int* ChangeArr(int n, int* arr, int& new_n) {
	int unique_elements = 1;

	for (int i = 1; i < n; i++) {
		bool Flag = true;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				Flag = false;
			}
		}
		if (Flag == true) {
			unique_elements +=  1;
		}		
		
	}


	new_n = unique_elements;
	int* new_arr = new int[unique_elements];
	new_arr[0] = arr[0];
	int k = 1;


	for (int i = 1; i < n; i++) {
		bool Flag = true;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				Flag = false;
			}
		}
		if (Flag == true) {
			new_arr[k] = arr[i];
			k += 1;
		}
	}

	return new_arr ;
}



