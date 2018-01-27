#include<iostream>
using namespace std;
int main()
{
int a=100;
int &ref=a;
ref=40;
cout<<"Value of a="<<a<<" and Address is :"<<&a;
cout<<"\nValue of refVar="<<ref<<" and Address :"<<&ref<<"\n";
return 0;
}
