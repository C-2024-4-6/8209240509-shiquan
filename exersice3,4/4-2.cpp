#include<iostream>
using namespace std;
int main()
{
	double list[10];
	int i,n;
	for (i = 0; i < 10; i++)
		cin >> list[i];
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
	for (n = 0; n < 10; n++)
		cout << list[n] << '\t';
	cout << endl;
	return 0;
}