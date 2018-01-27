#include<iostream>
using namespace std;
class A; //forword declearation
class B
{
int b;
	public:
void getval(int x)
{
b=x;
}
void putval(void)
{
cout<<"\nValue of B = "<<b;
}
friend void add(A,B);
};
class A
{
int a;
	public:
void getval(int y)
{
a=y;
}
void putval(void)
{
cout<<"\nValue of A = "<<a;
}
friend void add(A,B);
};

void add(A obj1,B obj2)
{
cout<<"\nAddition of A & B = "<<obj1.a+obj2.b;
}
int main()
{
A c;
B d;
c.getval(100);
d.getval(200);
c.putval();
d.putval();
add(c,d);
return 0;
}
