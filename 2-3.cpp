#include<iostream>
using namespace std;
float max(float x,float y,float z)

{
	float w;
	w = x > y ? (x > z ? x : z) : (y > z ? y : z);
	return w;
}
int main()
{
	cout << "输入三角形三边" << endl;
	float x, y, z;
	cin >> x >> y >> z;
	if (x + y + z - max(x, y, z) > max(x, y, z))
		cout << "周长是：" << x + y + z << endl;
	else cout << "不是三角形" << endl;
	if (x + y + z - max(x, y, z) > max(x, y, z))
		if (x == y || x == z || y == z)
			cout << "是等腰三角形" << endl;
		else cout << "不是等腰三角形" << endl;
	
	
	
	return 0;

}