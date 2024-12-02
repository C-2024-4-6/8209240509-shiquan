#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (is_vaild(a, b, c) == true)
		cout << _area(a, b, c) << endl;
	else cout << "false" << endl;
	return 0;
}
