#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float f, c;
	cout << "���뻪�϶�" << endl;
	cin >> f;
	c = (f - 32) / 9 * 5;
	cout << "���϶���" <<setprecision(4)<< c << endl;
	return 0;
}