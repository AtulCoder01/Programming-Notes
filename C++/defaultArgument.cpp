#include<iostream>
using namespace std;
int add(int x=10,int y=20,int z=30)
{
return (x+y+z);
}

int main()
{
cout<<"Addition is "<<add();
cout<<"\nAddition is "<<add(100);
cout<<"\nAddition is "<<add(50,50);
cout<<"\nAddition is "<<add(100,100,100);
return 0;
}
