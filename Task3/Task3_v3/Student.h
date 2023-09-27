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
	DateB operator = (const DateB& obj) {
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


	Student() {};
	Student(string name, string surname, string patronymic, DateB dat, string phone) {
		Name = name;
		Surname = surname;
		Patronymic = patronymic;
		data = dat;
		pN = phone;
	}


	friend ostream& operator << (ostream& stream, const Student& obj) {
		stream << obj.Name << endl;
		stream << obj.Surname << endl;
		stream << obj.Patronymic << endl;
		stream << obj.data << endl;
		stream << obj.pN << endl;

		return stream;
	}
};

