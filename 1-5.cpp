#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f, c;
	cout << "输入华氏度" << endl;
	cin >> f;
	c = (f - 32) / 9 * 5;
	cout << "摄氏度是" <<setprecision(4)<< c << endl;
	return 0;
}