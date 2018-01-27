#include<iostream>
using namespace std;
int main()
{
int n[3][3],i,j,sum=0;
cout<<"Enter matrix Element:>\n";
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
     cout<<"Enter ("<<i<<","<<j<<") element :>";
     cin>>n[i][j];	
   }
}
cout<<"Elements are:>\n";
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
   cout<<n[i][j]<<"\t";
   sum=sum+n[i][j];
   }
   cout<<" "<<i+1<<"st row Addition="<<sum<<"\n";
   sum=0;
}
return 0;
}
