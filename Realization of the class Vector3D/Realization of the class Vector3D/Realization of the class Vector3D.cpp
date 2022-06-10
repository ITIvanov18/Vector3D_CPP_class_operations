#include <iostream>
using namespace std;


class Vector3d {
private:

	//main values
	float x;
	float y;
	float z;

	//constructors
	Vector3d()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3d(float x1 = 0, float y1 = 0, float z1 = 0)
	{
		x = x1;
		y = y1;
		z = z1;
	}


public:
	void operator-=(const Vector3d& v);
	void operator+=(const Vector3d& v);
	void operator*=(const Vector3d& v);
	void operator/=(const Vector3d& v);
	float distance(const Vector3d& vec);
	float magnitude();
	float square();
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

//magnitude of vectors
float Vector3d::magnitude()
{
	return sqrt(square());
}

//distance between vectors

float Vector3d::distance(const Vector3d& v)
{
	Vector3d dist = *this - v;
	return dist.magnitude();
}




void Vector3d::print()
{
	cout << "x = " << this->x << ", y = " << this->y << ", z = " << this->z << endl;
}



int main() {




}
