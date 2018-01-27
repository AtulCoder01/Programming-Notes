#include<iostream>
using namespace std;
class test
{
int a,b,c;
	public:
void getdata(int ,int,int);
void operator-();
void disp();
};
void test :: getdata(int x,int y,int z)
{
a=x;
b=y;
c=z;
}
void test :: operator- ()
{
a=-a;
b=-b;
c=-c;
}
void test :: disp()
{
cout<<"\nvalue of a = "<<a;
cout<<"\nvalue of b = "<<b;
cout<<"\nvalue of c = "<<c;
}
int main()
{
test obj;
obj.getdata(-10,20,40);
obj.disp();
//- obj ;
obj.operator - ();
obj.disp();
return 0;
}
