#include<iostream>
using namespace std;
int calc(int);
int calc(int,int);
int main()
{
int s,a,b;
cout<<"Enter two number:>";
cin>>a>>b;
cout<<"Addition is "<<calc(a,b);
return 0;
}

int calc(int x)
{
return (x*x);
}

int calc(int x,int y)
{
return (x+y);
}
