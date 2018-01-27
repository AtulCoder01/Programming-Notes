#include <iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter your age";
cin>>age;
if(age>=10 && age<=50)
{
    if(age>=10 && age<=18)
    {
    cout<<"You are a Teenager";
    }
    else
    {
    cout<<"you are not a Teenager";
    }
}
else
{
   if(age<10)
   {
   cout<<"you are under 10 year";
   }
   else
   {
   cout<<"you are more than 50 year";
   }
}
return 0;
}
