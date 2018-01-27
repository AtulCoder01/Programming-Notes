#include<iostream>
using namespace std;
int add(void);
int main()
{
int ans=add();
cout<<"Addition is "<<ans;
}

int add(void)
{
int a,b;
cout<<"Enter value of a:>";
cin>>a;
cout<<"Enter value of b:>";
cin>>b;
return(a+b);
}
