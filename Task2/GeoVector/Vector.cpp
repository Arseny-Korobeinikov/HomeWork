#include "Vector.h"
#include <math.h>



namespace Vec {



	TVector::TVector() {
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}
	TVector::TVector(float x_, float y_, float z_) {
		x = x_;
		y = y_;
		z = z_;
	}

	TVector:: TVector(const TVector& vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}


	TVector TVector:: operator + (const TVector& vec) {
		return TVector(x + vec.x, y + vec.y, z + vec.z);

	}

	TVector TVector:: operator - (const TVector& vec) {
		return TVector(x - vec.x, y - vec.y, z - vec.z);
	}
	float TVector::  operator * (const TVector& vec) {
		return (x * vec.x + y * vec.y + z * vec.z);
	}

	const TVector& TVector:: operator = (TVector& vec) {
		return TVector(vec.x, vec.y, vec.z);	
	}



	const float TVector::Length() {
		return (sqrt(x * x + y * y + z * z));
	}
	const float TVector::Cos(TVector& vec) {
		float a = this->operator*(vec);
		float b = this->Length() * vec.Length();
		return (a / b);
	}

	
	

	
}
