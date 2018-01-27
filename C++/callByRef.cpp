#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
int a,b;
cout<<"Enter value of a & b :";
cin>>a>>b;
cout<<"a = "<<a;
cout<<"\nb = "<<b;
swap(a,b);//call
cout<<"\na = "<<a;
cout<<"\nb = "<<b;
return 0;
}

void swap(int &x,int &y)
{
x=(x*y)/(y=x);
}
