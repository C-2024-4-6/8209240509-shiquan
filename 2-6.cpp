#include<iostream>
using namespace std;
int max(int x,int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}
int main()
{
	cout << "输入两个正整数" << endl;
	int x, y,i=0,z;
	cin >> x >> y;
	for (i = max(x, y) - 1; x % i != 0 || y % i != 0; i--);
	cout << "最大公约数是" <<i<< endl;
	z = x * y / i;
	cout << "最小公因数是" <<z<< endl;
	return 0;

		
}