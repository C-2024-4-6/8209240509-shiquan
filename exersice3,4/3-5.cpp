#include<iostream>
using namespace std;
int a(int i)
{
	if (i == 10)
		return 1;
	return (a(i + 1) + 1) * 2;
	
}
int main()
{
	cout << a(1) << endl;
	return 0;
}
