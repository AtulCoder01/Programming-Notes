#include<iostream>
using namespace std;
int sum=100;
int main()
{
int sum=500;
cout<<"Value of sum in local = "<<sum;
cout<<"\nValue of sum in global = "<<::sum<<"\n";
return 0;
}

