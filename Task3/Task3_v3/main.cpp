#include"Group.h"



int main() {
	setlocale(LC_ALL, "ru");
	try {
		Group a;
		a.FillGroupFromFile("data.txt");
		cout << a;
	}
	catch (const char* exp) {
		cout << exp;
	}


	return 0;
}