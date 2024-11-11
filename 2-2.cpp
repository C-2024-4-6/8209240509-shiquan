#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "ÊäÈëx" << endl;
	cin >> x;
	if (x > 0 && x <= 10)
		if (x >= 5)
			y = x * x, cout << y << endl;
		else if (x < 1)
			y = 3 - 2 * x, cout << y << endl;
		else y = 2 / (4 * x) + 1, cout << y << endl;
	else cout << "false" << endl;
	return 0;
}