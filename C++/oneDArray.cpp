#include<iostream>
using namespace std;
int main()
{
int n[5],i,sum=0;
cout<<"Enter five elements:\n";
for(i=0;i<5;i+=1)
{
cout<<"Enter "<<i+1<<"st element :>";
cin>>n[i];
}
cout<<"Elements are :>";
for(i=0;i<5;i++)
{
cout<<n[i]<<",";
sum=sum+n[i];
}
cout<<"\nTotal :>"<<sum<<"\n";
return 0;
}
