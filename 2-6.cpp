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
	cout << "��������������" << endl;
	int x, y,i=0,z;
	cin >> x >> y;
	for (i = max(x, y) - 1; x % i != 0 || y % i != 0; i--);
	cout << "���Լ����" <<i<< endl;
	z = x * y / i;
	cout << "��С��������" <<z<< endl;
	return 0;

		
}