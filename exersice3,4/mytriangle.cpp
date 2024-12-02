#include<iostream>
using namespace std;

bool is_vaild(double side1, double side2, double side3)
{
	double z;
	z = side1 > side2 ? (side1 > side3 ? side1 : side3) : (side2 > side3 ? side2 : side3);
	if ((side1 + side2 + side3 - z) > z)
		return true;
	else return false;
}
double _area(double side1, double side2, double side3)
{
	double z, s;
	s = (side1 + side2 + side3) / 2;
	z = sqrt(s * (s - side1)*(s - side2)*(s - side3));
	return z;


}
