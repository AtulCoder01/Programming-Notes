#include<iostream>
using namespace std;
class A
{
	protected:
		int no;
	public:
		void getno()
		{
		cout<<"\nEnter the number :>";
		cin>>no;
		}
};
class B : public A
{
	public:
		void squre()
		{
getno();
		cout<<"\nSqure of the number = "<<no*no;
		}
};
class C : public A
{
	public:
		void cube()
		{
getno();
		cout<<"\nCube of the number = "<<no*no*no;
		}
};
int main()
{
B bobj;
C cobj;
bobj.squre();
cobj.cube();
return 0;
}
