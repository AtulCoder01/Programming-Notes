#include<iostream>
using namespace std;
int main()
{
int arr[5]={10,20,30,40,50};
int *p,i,sum=0;
//p=arr;
p=&arr[0];
cout<<"Element are :";
for(i=0;i<5;i++)
{
cout<<"\n"<<*p;
sum=sum+*p;
p++;
}
cout<<"\nTotal = "<<sum;
return 0;
}
