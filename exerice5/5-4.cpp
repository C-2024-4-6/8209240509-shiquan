#include<iostream>
using namespace std;
class Student
{
private:
	int grade;
	int id;
public:
	Student(int id, int grade)
	{
		this->id = id, this->grade = grade;
	}
	void set(int id,float grade)
	{
		this->id = id, this->grade = grade;
	}
	int show()
	{
		return id;
	}
	int sg()
	{
		return grade;
	}
};


void max(Student *students)
{
	int m = 0;
	for (int i = 1; i < 5; i++)
		if (students[i].sg() >= students[m].sg())
			m = i;
	cout << students[m].show() << endl;
}
int main()
{
	
	int m1, m2, m3, m4, m5, n1, n2, n3, n4, n5;
	cin >> m1 >> n1 >> m2 >> n2 >> m3 >> n3 >> m4 >> n4 >> m5 >> n5;
	Student students[5] = {
		Student(m1,n1),
		Student(m2,n2),
		Student(m3,n3),
		Student(m4,n4),
		Student(m5,n5),

	};
	max(students);
	return 0;
}