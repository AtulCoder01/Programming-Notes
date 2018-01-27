#include<iostream>
using namespace std;
class Base
{
	protected:
		int b;
	public:
		void setb(int x)
		{
		b=x;
		}
		void disp(void)
		{
		cout<<"\nBase class methode";
		cout<<"\nvalue of b = "<<b;
		}
};
class Derived : public Base
{
int d;
	public:
void setd(int y)
{
d=y;
}
void disp(void)
{
cout<<"\nDerived class methode";
cout<<"\nvalue of b = "<<b;
cout<<"\nvalue of d ="<<d;
}
};
int main()
{
Base b;
Derived d;
Base *bp;
Derived *dp;
dp=&d;
dp->setb(200);
dp->setd(400);
dp->disp();
//((Derived*)bp)->setd(400);
//((Derived*)bp)->disp();









//bp->setb(200);
//bp->disp();











return 0;
}
