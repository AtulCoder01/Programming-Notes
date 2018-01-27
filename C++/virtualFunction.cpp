#include<iostream>
using namespace std;
class Base 
{
	public:
		void disp()
		{
		cout<<"\nBase class disp";
		}
		virtual void show()
		{
		cout<<"\nBase class show";
		}
};
class Derived : public Base
{
	
		void disp()
		{
		cout<<"\nDerived class disp";
		}
		void show()
		{
		cout<<"\nDerived class show";
		}
};
int main()
{
Base objb;
Derived objd;
Base *p;
p=&objd;
p->disp();
(*p).show();
return 0;
}
