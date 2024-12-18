#include <iostream>
#include"student.h"   
using namespace std;
void Student::display()         
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int num, const char name[20],char sex)
{
    
    this->num = num,this->sex=sex;
    for (int i = 0; i < 20; i++)
       this-> name[i] = name[i];
}
