#include "Vector.h"




int main() {	
	setlocale(LC_ALL, "ru");
	Vector<int> a (4), b(4);
	std::cout << "������� ���������� �������� � � b" << std::endl;
	std:: cin >> a >> b;
	a = a - b;
	std::cout << a;

	double p = a * b;
	std::cout << p << std::endl;

	double l = b.length();
	std::cout << l << std::endl;

	Vector<int> c(4); 
	std::cout << "������� ���������� ������a c" << std::endl;
	std::cin >> c;
	if (c == a) {
		std::cout << "������� � � � �����" << std::endl;
	}

	if (c != a) {
		std::cout << "������� � � � �����" << std::endl;
	}

	c = b;
	std::cout << c << std::endl;


	return 0;
}
