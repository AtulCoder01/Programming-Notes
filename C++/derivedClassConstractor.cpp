#include<iostream>
using namespace std;
class A
{
int a;
	public:
A(int x)
{
a=x;
cout<<"\nA class constrator initialized";
}
void dispa(void)
{
cout<<"\nvalue of a = "<<a;
}
};
class B
{
int b;
	public:
B(int y)
{
b=y;
cout<<"\nB class constrator initialized";
}
void dispb(void)
{
cout<<"\nvalue of b = "<<b;
}
};
class C : public B ,public A
{
int m;
	public:
C(int x,int y,int z) : A(x),B(y)
	{
	m=z;
	cout<<"\nC class constrator initialized";
	}
void dispm()
{
cout<<"\nvalue of m = "<<m;
}
};
int main()
{
C obj(10,20,30);
obj.dispa();
obj.dispb();
obj.dispm();
return 0;
}
