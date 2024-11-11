#include<iostream>
using namespace std;
int main()
{
	int n, x, y;
	cout << "输入一个数，1表示加法，2表示减法，3表示乘法，4表示除法，5表示取余" << endl;
	cin >> n;
	cout << "输入进行运算的两个数" << endl;
	
	cin >> x >> y;
	switch (n)
	{
	case 1:cout << x + y << endl; break;
	case 2:cout << x - y<<endl; break;
	case 3:cout << x * y << endl; break;
	case 4:if (y == 0)
		cout << "false" << endl; 
		  else cout << x / y << endl; break;
	case 5:if (y == 0)
		cout << "false" << endl;
		  else
		cout << x % y << endl;
	default:;
	}
	return 0;
}