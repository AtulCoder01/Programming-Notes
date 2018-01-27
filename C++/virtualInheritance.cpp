#include<iostream>
using namespace std;
class A
{
int a;
	public:
void dispa()
{
a=10;
cout<<"\nclass A "<<a;
}
};
class B : public virtual A
{
int b;
	public:
void dispb()
{
b=20;
cout<<"\nclass B "<<b;
}
};
class C : virtual public A
{
int c;
	public:
void dispc()
{
c=30;
cout<<"\nclass C "<<c;
}
};
class D : public B,public C
{
int d;
	public:
void dispd()
{
d=40;
cout<<"\nclass D "<<d;
}
};

int main()
{
D obj;
obj.dispa();//obj.C :: dispa();/obj.C :: dispa();
obj.dispb();
obj.dispc();
obj.dispd();
return 0;
}
