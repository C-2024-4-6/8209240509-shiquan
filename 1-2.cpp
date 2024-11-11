#include<iostream>
using namespace std;
int main()
{
	int r, h,v;
	const float pi = 3.14;
	cout << "输入半径和锥高" << endl;
	cin >> r >> h;
	v = pi * r * r * h / 3;
	cout << "圆锥的体积是" << v << endl;
	return 0;

}