#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> a;
	if (a >= 'a' && a <= 'z')
		cout << char(a - 'a' + 'A') << endl;
	else
		cout << a + 1 << endl;
	return 0;
}

