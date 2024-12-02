#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	int i, m, n, j;
	for (i = 0; i < 100; i++)
		a[i] =true;
	for (m = 1; m < 100; m++)
		for (n = m + 1; n < 100; n = n + m + 2)
			a[n] = !a[n];
	for (j = 0; j < 100; j++)
		if (a[j] == true)
			cout << j+1 << '\t';
	cout << endl;
	return 0;
}