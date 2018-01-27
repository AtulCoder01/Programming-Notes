#include<iostream>
using namespace std;
class A
{
int a;
	public:
void getval_a(int x);
int get_a();
};
class B : private A
{
int b,c;
	public:
fun(int a)
{

void getval_a(a);
int get_a();
}
void getval_b(int);
void add();
void dispval();
};
void A :: getval_a(int x)
{
a=x;
}
int A :: get_a()
{
return a;
}
void B :: getval_b(int x)
{
b=x;
}
void B :: add()
{
A ob;
c=ob.get_a()+b;
}
void B :: dispval()
{
A ob;
cout<<"\nValue of A = "<<ob.get_a();
cout<<"\nValue of B = "<<b;
cout<<"\nValur of C = "<<c;
}
int main()
{
int a,b;
A ob;
B obj;
cout<<"Enter value of A :>";
cin>>a;
cout<<"Enter value of B :>";
cin>>b;
//ob.getval_a(a);
obj.fun(a);
obj.getval_b(b);
obj.add();
obj.dispval();
return 0;
}
