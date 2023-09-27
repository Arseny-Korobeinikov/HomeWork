#include"Group.h"



int main() {
	setlocale(LC_ALL, "Russian");
	try {
		Group a("data.txt");	
		cout << a;
	
		const DateB d (3, 4, 2011);
		const Student stud("Artemiy","Korobeinikov","Petrovich", d,"+7-996-565-00-10");
		const Student aaa("Ivan", "Tabunov", "Petrovich", d, "+7-996-565-00-00");
		cout << stud <<"\n \n \n";
		a.Add(stud);
		a.Add(aaa);
		a.Add(aaa);

		cout << a;
		a.Del(a.SetStudent(2));
		cout << a;
	}
	catch (const char* exp) {
		cout << exp;
	}

	
	
	return 0;

}