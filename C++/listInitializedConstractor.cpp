#include<iostream>
using namespace std;
class Base
{
int a;
	public:
Base(int x) : a(x)
{
//a=x;
cout<<"\nBase class constractor initialized";
}
void dispa(void)
{
cout<<"\nvalue of a = "<<a;
}
};
class Derived : public Base
{
int b;
public:
Derived(int x,int y) : Base(x),b(y)
	{
	cout<<"\nDerived class constractor initialized";
	}
void dispb()
{
cout<<"\nvalue of b = "<<b;
}
};

int main()
{
Derived obj(10,20);
obj.dispa();
obj.dispb();
return 0;
}

