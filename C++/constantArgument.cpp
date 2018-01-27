#include<iostream>
using namespace std;
int add(const int x)
{
int y=x+10;
return x;
}
int main()
{
int a;
cout<<"Enter value of a:>";
cin>>a;
cout<<add(a);
return 0;
}
