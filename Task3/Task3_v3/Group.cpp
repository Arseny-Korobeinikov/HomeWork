#include "Group.h"
#include <fstream>
#include <string>




Student ReadStudent(ifstream file) {
	string name;
	getline(file, name);

	string surname;
	getline(file, surname);

	string patronymic;
	getline(file, patronymic);

	DateB a;

	string tmp;
	getline(file, tmp, '.');
	a.day = stoi(tmp);

	getline(file, tmp, '.');
	a.month = stoi(tmp);

	getline(file, tmp);
	a.year = stoi(tmp);

	string phone;
	getline(file, phone);

	Student s = { name, surname, patronymic, a, phone };
	return s;
}

// конструкторы и деструктор
Group::Group() {
	size = 0;
	maxsize = 10;
	students = new Student[0];
}


Group::Group(int size_) {
	size = size_;
	maxsize = size + 10;
	students = new Student[maxsize];
}


Group::Group(const Group& obj) {
	size = obj.size;
	maxsize = obj.maxsize;
	students = new Student[maxsize];
	for (int i = 0; i < size; ++i) {
		students[i] = obj.students[i];
	}
}

Group::~Group() {
	size = 0;
	maxsize = 10;
	delete[] students;
}





//фукнция прочитать с файла
void Group::FillGroupFromFile(const string& file_path) {
	ifstream file;
	string tmp;
	file.open(file_path);

	if (!file.is_open()) {
		throw "\nRead file error.\n";
	}

	while (!file.eof()) {
		Student current_student = ReadStudent(file);
		Add(current_student);
		getline(file, tmp);
	}

	file.close();
}


//добавление студента двумя способами
Group Group::operator + (const Student& student) {
	Group tmp(*this);
	if (tmp.size == tmp.maxsize) {
		resize();
	}

	size += 1;
	tmp.students[size].Name = student.Name;
	tmp.students[size].Surname = student.Surname;
	tmp.students[size].Patronymic = student.Patronymic;
	tmp.students[size].data = student.data;
	tmp.students[size].pN = student.pN;

	return tmp;
}

void Group::Add(const Student& student) {
	if (size == maxsize) {
		resize();
	}

	size += 1;
	students[size].Name = student.Name;
	students[size].Surname = student.Surname;
	students[size].Patronymic = student.Patronymic;
	students[size].data = student.data;
	students[size].pN = student.pN;
}

//удаление студента
void Group::Del(const Student& student) {
	int index = searchSN(student.Surname);
	Student tmp;
	for (int i = index; i < size; ++i) {
		tmp = students[i + 1];
		students[i + 1] = students[i];
		students[i] = tmp;
	}
	size -= 1;
}

//поиски возвращающие индекс
int Group::searchP(string number) {
	for (int i = 0; i < size; ++i) {
		if (number == students[i].pN) {
			return i;
		}
	}
	throw "Такого студента в группе нет";
}

int Group::searchSN(string sn) {
	for (int i = 0; i < size; ++i) {
		if (sn == students[i].Surname) {
			return i;
		}
	}
	throw "Такого студента в группе нет";
}


int Group::search(DateB d) {
	for (int i = 0; i < size; ++i) {
		if (d == students[i].data) {
			return i;
		}
	}
	throw "Такого студента в группе нет";
}

//поиски с выводом на экран

void Group::SearchPWithOut(string number) {
	for (int i = 0; i < size; ++i) {
		if (number == students[i].pN) {
			cout << students[i];
		}
	}
	throw "Такого студента в группе нет";
}
void Group::searchSNWithOut(string sn) {
	for (int i = 0; i < size; ++i) {
		if (sn == students[i].pN) {
			cout << students[i];
		}
	}
	throw "Такого студента в группе нет";
}
void Group::searchWithOut(DateB d) {
	for (int i = 0; i < size; ++i) {
		if (d == students[i].data) {
			cout << students[i];
		}
	}
	throw "Такого студента в группе нет";
}









//увеличение памяти
void Group::resize() {
	Student* tmp = new Student[size];
	for (int i = 0; i < size; i++) {
		tmp[i] = students[i];
	}
	maxsize += step;
	students = new Student[maxsize];
	for (int i = 0; i < size - step; i++) {
		students[i] = tmp[i];
	}
}


