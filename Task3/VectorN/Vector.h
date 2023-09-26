#ifndef VECTOR_H
#define VECTOR_H


#include <iostream>
#include <math.h>

template <typename T>
class Vector {
private:
	int n;
	T* coor;
public:
	Vector();
	Vector(int size);
	Vector(const Vector<T>& obj);
	~Vector();
	Vector <T> operator + (const Vector<T>& obj);
	Vector <T> operator - (const Vector<T>& obj);
	double operator * (const Vector<T>& obj);
	double length() const;
	bool operator == (const Vector<T>& obj) const;
	bool operator != (const Vector<T>& obj) const;
	const Vector<T>& operator = (const Vector<T>& obj);
	friend std::ostream& operator << (std::ostream& stream, const Vector<T>& obj) {
		stream << '{';
		for (int i = 0; i < obj.n; i++) {
			stream << obj.coor[i] << ",";
		}
		stream << '}' << std::endl;;
		return stream; 
		
	}
	friend std::istream& operator >> (std::istream& stream, Vector<T>& obj) {
		for (int i = 0; i < obj.n; i++) {
			stream >> obj.coor[i];
		}
		return stream;
	}
};

	template <typename T>
	Vector<T>::Vector() {
		n = 0;
		coor = new T[0];
	}

	template <typename T>
	Vector<T>::Vector(int size) {
		n = size;
		coor = new T[size];
	}

	template <typename T>
	Vector<T>::Vector(const Vector<T>& obj){
		n = obj.n;
		coor = new T[n];
		for (int i = 0; i < n; i++) {
			coor[i] = obj.coor[i];
		}
	}


	template <typename T>
	Vector<T>::~Vector() {
		n = 0;
		delete[] coor;
	}

	template <typename T>
	Vector<T> Vector<T>:: operator + (const Vector<T>& obj) {
		if (n != obj.n) {
			throw "Разные пространства";
		}
		Vector<T> tmp(*this);
		for (int i = 0; i < n; i++) {
			tmp.coor[i] += obj.coor[i];
		}
		return tmp;
	}

	template <typename T>
	Vector <T> Vector<T>:: operator - (const Vector<T>& obj) {
		if (n != obj.n) {
			throw "Разные пространства";
		}
		Vector<T> tmp(*this);
		for (int i = 0; i < n; i++) {
			tmp.coor[i] -= obj.coor[i];
		}
		return tmp;
	}



	template <typename T>
	double Vector<T>:: operator * (const Vector<T>& obj){
		if (n != obj.n) {
			throw "Разные пространства";
		}
		Vector<T> tmp(*this);
		double res = 0.0;
		for (int i = 0; i < n; i++) {
			res += tmp.coor[i] * obj.coor[i];
		}
		return res;
	}



	template <typename T>
	double Vector<T>:: length() const{
		double res = 0.0;
		for (int i = 0; i < n; i++) {
			res += coor[i] * coor[i];
		}
		return (sqrt(res));
	}


	template <typename T>
	bool Vector<T>:: operator == (const Vector<T>& obj) const {
		if (n != obj.n) {
			throw "Разные пространства";
		}
		for (int i = 0; i < n; i++) {
			if (coor[i] != obj.coor[i]) {
				return false;
			}
		}
		return true;
	}

	template <typename T>
	bool Vector<T>::operator != (const Vector<T>& obj) const {
		if (n != obj.n) {
			throw "Разные пространства";
		}
		for (int i = 0; i < n; i++) {
			if (coor[i] != obj.coor[i]) {
				return true;
			}
		}
		return false;
	}



	template <typename T>
	const Vector<T>& Vector<T>::operator = (const Vector<T>& obj) {
		if (this == &obj) {
			return(*this);
		}
		if (n != obj.n) {
			delete[] coor;
			n = obj.n;
			coor = new T[n];
		}
		
		for (int i = 0; i < n; i++) {
			coor[i] = obj.coor[i];
		}

		return (*this);
	}

	


#endif // !VECTOR_H
