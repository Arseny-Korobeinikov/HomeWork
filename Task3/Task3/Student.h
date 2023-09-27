#pragma once
#include <iostream>
using namespace std;

struct DateB {
	int day;
	int month;
	int year;


	DateB() {
		day = 0;
		month = 0;
		year = 0;
	}
	DateB(int a, int b, int c) {
		day = a;
		month = b;
		year = c;
	}
	const DateB& operator = (const DateB& obj) {
		if (*this == obj) {
			return (*this);
		}
		day = obj.day;
		month = obj.month;
		year = obj.year;
		return (*this);
	}


	bool operator == (const DateB& d)const {
		if ((d.day == day) && (d.year == year) && (d.month == month)) {
			return true;
		}
		return false;
	}

	friend ostream& operator << (ostream& stream, const DateB& obj) {
		stream << obj.day << '.' << obj.month << '.' << obj.year;
		return stream;
	}
};



struct Student {
	string Name;
	string Surname;
	string Patronymic;
	DateB data;
	string pN;


	Student() {
		DateB d(3, 4, 2111);
		Name = "Art";
		Surname = "Korob";
		Patronymic = "Petr";
		data = d;
		pN = "777777";
	}

	Student(const string& name, const string& surname, const string& patronymic, const DateB& dat, const string& phone) {
		Name = name;
		Surname = surname;
		Patronymic = patronymic;
		data = dat;
		pN = phone;
	}

	Student(const Student& obj) {
		Name = obj.Name;
		Surname = obj.Surname;
		Patronymic = obj.Patronymic;
		data = obj.data;
		pN = obj.pN;
	}
	

	friend ostream& operator << (ostream& stream, const Student& obj) {
		stream << obj.Name << endl;
		stream << obj.Surname << endl;
		stream << obj.Patronymic << endl;
		stream << obj.data << endl;
		stream << obj.pN << endl;
		stream << endl;

		return stream;
	}
};