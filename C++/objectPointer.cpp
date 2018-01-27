#include<iostream>
#include<string.h>
using namespace std;
class Student
{
int roll;
char name[15];
	public:
void getdata(int x,char *y)
{
roll=x;
strcpy(name,y);
}
void putdata()
{
cout<<"Student Name "<<name;
cout<<"\nStudent Roll Number "<<roll;
}		
};
int main()
{
Student obj;
Student *p;
p=&obj;
p->getdata(101,"Atul");
p->putdata();
return 0;
}

