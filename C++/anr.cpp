#include<iostream>
using namespace std;
void add(int,int);
int main()
{
int a,b;
cout<<"Enter value of a:>";
cin>>a;
cout<<"Enter value of b:>";
cin>>b;
add(a,b);
return 0;
}

void add(int x,int y)
{
cout<<"Addition is "<<(x+y);
}
