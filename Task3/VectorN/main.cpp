#include "Vector.h"




int main() {	
	setlocale(LC_ALL, "ru");
	Vector<int> a (3), b(3);
	std::cout << "������� ���������� �������� � � b" << std::endl;
	std:: cin >> a >> b;

	std::cout << a - b;
	std::cout << a + b;


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
