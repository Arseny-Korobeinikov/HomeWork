#pragma once
#include"Student.h"

class Group {
private:
	int size;
	int maxsize;
	const int step = 10;
	Student* students;
public:
	Group();
	Group(int size_);
	Group(const Group& obj);
	~Group();
	void FillGroupFromFile(const std::string& file_path);

	void Add(const Student& student);
	Group operator + (const Student& student);

	void Del(const Student& student);

	int searchP(string number);
	int searchSN(string sn);
	int search(DateB d);

	void SearchPWithOut(string number);
	void searchSNWithOut(string sn);
	void searchWithOut(DateB d);

	friend ostream& operator << (ostream& stream, const Group& obj) {
		stream << "Группа студентов:" << endl;
		for (int i = 0; i < obj.size; ++i) {
			stream << i + 1 << '.';
			stream << (obj.students[i]);
		}
		return stream;
	}



	void resize();
}; 