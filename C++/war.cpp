#include<iostream>
using namespace std;
int sqr(int);
int main()
{
int no;
cout<<"Enter a number:>";
cin>>no;
int ans=sqr(no);
cout<<"Squre of "<<no<<" is "<<ans;
return 0;
}

int sqr(int x)
{
return (x*x);
}
