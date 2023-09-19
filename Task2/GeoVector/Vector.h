#ifndef HEADER_H
#define HAEDER_H

namespace Vec {
	class TVector {
	private:
		float x;
		float y;
		float z;
	public:
		TVector();
		TVector(float x_, float y_, float z_);
		TVector operator + (const TVector& vec);
		TVector operator - (const TVector& vec);
		float operator * (const TVector& vec);
		float Length();
		float Cos(TVector& vec);
	};
}



#endif

