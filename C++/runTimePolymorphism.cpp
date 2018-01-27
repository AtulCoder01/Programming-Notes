#include<iostream>
using namespace std;
class A
{
	public:
		virtual void disp()=0;
};
class B : public A
{
int val1;
	public:
B(int x)
{
val1=x;
}
void disp()
{	
cout<<"\nval1 in class B = "<<val1;
}
};
class C : public A
{
int val2;
	public:
C(int x) : val2(x)
	{}
void disp()
{
cout<<"\nval2 in class C = "<<val2;
}
};
int main()
{
A *p[2];
B objb(400);
C objc(200);
p[0]=&objb;
p[1]=&objc;
p[0]->disp();
p[1]->disp();

return 0;
}


