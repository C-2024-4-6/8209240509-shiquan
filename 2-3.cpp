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
	cout << "��������������" << endl;
	float x, y, z;
	cin >> x >> y >> z;
	if (x + y + z - max(x, y, z) > max(x, y, z))
		cout << "�ܳ��ǣ�" << x + y + z << endl;
	else cout << "����������" << endl;
	if (x + y + z - max(x, y, z) > max(x, y, z))
		if (x == y || x == z || y == z)
			cout << "�ǵ���������" << endl;
		else cout << "���ǵ���������" << endl;
	
	
	
	return 0;

}