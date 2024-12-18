#include<iostream>
using namespace std;
class Cube
{
private:
	float length;
	float width;
	float height;
public:
	void set(float length, float width, float height)
	{
		this->length = length, this->width = width, this->height = height;
	};
	float volume()
	{
		return length * width * height;
	};
	void show()
	{
		cout << volume() << endl;
	}
};
int main()
{
	float h1, w1, l1, h2, l2, w2, h3, w3, l3;
	cin >> h1 >> w1 >> l1;
	cin >> h2 >> w2 >> l2;
	cin >> h3 >> w3 >> l3;
	Cube c1, c2, c3;
	c1.set(l1, w1, h1);
	c2.set(l2, w2, h2);
	c3.set(l3, w3, h3);
	c1.volume();
	c2.volume();
	c3.volume();
	c1.show();
	c2.show();
	c3.show();
	return 0;
}