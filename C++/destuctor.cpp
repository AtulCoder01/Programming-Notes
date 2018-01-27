#include<iostream>
using namespace std;
class test
{
static int count;
	public:
test();

~test();

};
test :: test()
{
count++;
cout<<"\nt"<<count<<" object created";
}
test :: ~test()
{
cout<<"\nt"<<count<<" object destroyed";
count--;
}
int test :: count;
int main()
{
cout<<"\nMain Block:";
test t1;
{
cout<<"\nBlock 1";
test t2,t3;
cout<<"\nExit from block 1:";
}
cout<<"\nExit from main block"; 
return 0;
}
