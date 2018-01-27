#include<iostream>
using namespace std;
class test
{
int code;
float price;
	public:
test(int c,float p);
test(const test &t);
void disp();
};

test :: test(int c,float p)
{
code=c;
price=p;
cout<<" you enter parameterized constructar :\n";
}
test :: test(const test &t)
{

code=t.code;
price=t.price;
cout<<" you enter copy constructar :\n";
}
void test :: disp()
{
cout<<"\ncode = "<<code;
cout<<"\nprice = "<<price<<"\n";
}
int main()
{
test t1(101,50.34);
test t2(t1);
test t3=t2;
cout<<"\nt1 object ";
t1.disp();
cout<<"\nt2 object ";
t2.disp();
cout<<"\nt3 object ";
t3.disp();
return 0;
}
