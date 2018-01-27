#include<iostream>
using namespace std;
long fact(int);
int main()
{
int n;
cout<<"Enter a value:>";
cin>>n;
cout<<"Factorial of "<<n<<" is "<<fact(n);
return 0;
}

long fact(int x)
{
if(x==0)
	return 1;
return (x*fact(x-1));
}
