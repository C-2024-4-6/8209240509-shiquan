#include<iostream>
using namespace std;
int main()
{
	int n, x, y;
	cout << "����һ������1��ʾ�ӷ���2��ʾ������3��ʾ�˷���4��ʾ������5��ʾȡ��" << endl;
	cin >> n;
	cout << "������������������" << endl;
	
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