#ifndef HEADER_H
#define HAEDER_H
#include <iostream>



namespace Vec {
	class TVector {
	private:
		float x;
		float y;
		float z;
	public:
		TVector();
		TVector(float x_, float y_, float z_);
		TVector(const TVector& vec);
		TVector operator + (const TVector& vec);
		TVector operator - (const TVector& vec);
		const TVector& operator = (TVector& vec);
		float operator * (const TVector& vec);
		const float Length();
		const float Cos(TVector& vec);
		friend std::istream& operator>> (std::istream& stream, TVector& vec) {
			stream >> vec.x >> vec.y >> vec.z;
			return stream;
		};
		friend std::ostream& operator << (std::ostream& stream, const TVector& vec) {
			stream << '{' << vec.x << ", " << vec.y << ", " << vec.z << '}';
			return stream;
		};
	};
}

#endif

