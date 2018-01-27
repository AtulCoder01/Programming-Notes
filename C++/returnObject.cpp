#include<iostream>
using namespace std;
class test
{
int a,b;
	public:
void getval(int x,int y)
{
a=x;
b=y;
}
friend test sum(test,test);
void dispval(test);
};
test sum(test t1,test t2)
{
test t;
t.a=t1.a+t2.a;
t.b=t1.b+t2.b;
return t;
}
void test :: dispval(test t)
{
cout<<"\nValue of A = "<<t.a;
cout<<"\nValue of B = "<<t.b<<"\n";
}
int main()
{
test A,B,C;
A.getval(10,20);
B.getval(20,30);
C=sum(A,B);
A.dispval(A);
B.dispval(B);
C.dispval(C);
return 0;
}
