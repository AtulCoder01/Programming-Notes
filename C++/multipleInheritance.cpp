#include<iostream>
using namespace std;
class A
{
	protected:
		int m;
	public:
		void get_m(int);
};
void A :: get_m(int x)
{
m=x;
}

class B
{
	protected:
		int n;
	public:
		void get_n(int);
};
void B :: get_n(int x)
{
n=x;
}

class C : public A,public B
{
int c;
	public:
void add();
void display();
};
void C :: add()
{
c=m+n;
}
void C :: display()
{
cout<<"\nValue of m = "<<m;
cout<<"\nValue of n = "<<n;
cout<<"\nAddition of m & n = "<<c;
}

int main()
{
C obj;
obj.get_m(100);
obj.get_n(200);
obj.add();
obj.display();
}
