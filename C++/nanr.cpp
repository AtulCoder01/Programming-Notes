#include<iostream>
using namespace std;
void sqr(void);
int main()
{
sqr();
return 0;
}

void sqr(void)
{
int n;
cout<<"Enter a number :>";
cin>>n;
cout<<"Squre of "<<n<<" is "<<(n*n);
}
