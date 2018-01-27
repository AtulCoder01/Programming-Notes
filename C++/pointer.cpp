#include<iostream>
using namespace std;
int main()
{
int a=100;
int *p1;
int **p2;
p1=&a;
p2=&p1;
cout<<"\nvalue of A = "<<a;
cout<<"\nvalue of A = "<<*p1;
cout<<"\nvalue of A = "<<**p2;
return 0;
}
