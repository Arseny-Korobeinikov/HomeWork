#include"Group.h"



int main() {
	setlocale(LC_ALL, "Russian");
	try {
		Group a("data.txt");	
		cout << a;
	
		const DateB d (3, 4, 2011);
		const Student stud("Artemiy","Korobeinikov","Petrovich", d,"+7-996-565-00-10");
		const Student aaa("Ivan", "Tabunov", "Petrovich", d, "+7-996-565-00-00");
		cout << "Какого студента хочу добавить \n" << stud << "\n \n \n";
		a.Add(stud);
		a.Add(aaa);
		a.Add(aaa);

		cout <<"Добавил Артемия и двух Вань, а получилось: \n" << a;
		a.Del(a.SetStudent(2));
		cout << ": Удалил второго студента и получилось: \n" << a;
	}
	catch (const char* exp) {
		cout << exp;
	}

	
	
	return 0;

}