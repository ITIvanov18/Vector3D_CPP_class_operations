// Realization of the class Vector3D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Vector3d {
private:
	float x;
	float y;
	float z;



public:
	void operator-=(const Vector3d& v);
	void operator+=(const Vector3d& v);
	void operator*=(const Vector3d& v);
	void operator/=(const Vector3d& v);
	float calcScalarProduct(const Vector3d& v) const;
	void print();
};



//addition of vectors
void Vector3d::operator +=(const Vector3d& v) {

	x += v.x;
	y += v.y;
	z += v.z;
}

//subtraction of vectors
void Vector3d::operator -=(const Vector3d& v)
{
	x -= v.x;
	y -= v.y;
	z -= v.z;
}


//multiplication of vectors
void Vector3d::operator *=(const Vector3d& v) {

	x *= v.x;
	y *= v.y;
	z *= v.z;
}



//division of vectors
void Vector3d::operator /=(const Vector3d& v) {

	x /= v.x;
	y /= v.y;
	z /= v.z;
}



void Vector3d::print()
{
	cout << "x = " << this->x << ", y = " << this->y << ", z = " << this->z << endl;
}



int main() {




}
