#include<iostream>
using namespace std;
int a(int x, int y)
{
	int i;
	if (x < y)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}
	for (i = 0;  (x + i)%x != 0 ||  (x + i)%y != 0; i++);
	return x + i;

}
int b(int x, int y)
{
	return x * y / (a(x, y));
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "最小公倍数" << a(m, n) << endl<<"最大公约数"<< b(m, n) << endl;
	return 0;
}