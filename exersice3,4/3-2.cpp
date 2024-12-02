#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	if (num <= 1)
		return false;
	for (i = 2; i<num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;

}
int main()
{
	
	for (int i= 2,n=0; n < 200; i++)
	{
		if (is_prime(i))
		{
			n++;
				cout << i << '\t';
			{
				if (n % 10 == 0)
					cout << endl;
			}
		}
	}
	return 0;
}
