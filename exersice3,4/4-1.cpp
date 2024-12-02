#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,m,j,n;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	for (m = 0; m < 10; m++)
		for (j = m + 1; j < 10; j++)
			if (a[m] == a[j])
				a[j] = -1;
	cout << "the distinct numbers are:";
	for (n = 0; n < 10; n++)
		if (a[n] >= 0)
			cout << a[n] << '\t';
	return 0;
	

}