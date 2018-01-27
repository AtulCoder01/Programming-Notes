#include<iostream>
using namespace std;
int main()
{
int n,i;
float total=0,*p;
cout<<"Enter number of subject:>";
cin>>n;
p=new float[n];
cout<<"Enter marks :\n";
for(i=0;i<n;i++)
{
cout<<"Subject "<<(i+1)<<" :>";
cin>>*(p+i);
}
cout<<"\nMarks:";
for(i=0;i<n;i++)
{
cout<<"\nsubject "<<i+1<<" = "<<*(p+i);
total=total+p[i];
}
cout<<"\nTotal = "<<total;
return 0;
}
