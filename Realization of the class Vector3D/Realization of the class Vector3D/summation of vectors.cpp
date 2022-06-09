#include <iostream>
using namespace std;


class Vector3d {
private:
	float x;
	float y;
	float z;


public:
	void operator+=(const Vector3d& v);

};
void Vector3d::operator +=(const Vector3d& v) {

	x += v.x;
	y += v.y;
	z += v.z;
}

int main() {



}

