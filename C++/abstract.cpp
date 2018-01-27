#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void disp()=0;
};
class D : public Base
{
public:
void disp()
{
cout<<"Derived class";
}
};
int main()
{
Base *ptr;
D obj;
ptr=&obj;
ptr->disp();
return 0;
}
