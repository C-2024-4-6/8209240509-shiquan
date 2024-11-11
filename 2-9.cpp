#include<iostream>
using namespace std;
int main()
{
	float i=0,j=0,sum=0,t=0;
	
	
		for (i = 2,j=1;sum<=100; i *= 2,j+=1)
			sum += i;
	
	t = sum / j*4/5;
	cout << t << endl;
	return 0;
}