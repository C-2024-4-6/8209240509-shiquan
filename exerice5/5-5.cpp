#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{
		this->x = x, this->y = y;
	}
	void setPoint(int i,int j)
	{
		x += i, y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point point1(60, 80);
	int m, n;
	cin >> m >> n;
	point1.setPoint(m, n);
	point1.display();
	return 0;
}