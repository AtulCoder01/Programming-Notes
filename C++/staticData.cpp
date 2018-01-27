#include<iostream>
using namespace std;
class test
{
int no;
static int count;
	public:
void getval(int);
void dispcount(void);
};

void test::getval(int x)
{
no=x;
cout<<"Number = "<<no<<"\n";
count++;
}

void test::dispcount(void)
{
cout<<"counter = "<<count<<"\n";
}
int test::count;

int main()
{
test t1,t2,t3;
t1.dispcount();
t2.dispcount();
t3.dispcount();
t1.getval(100);
t2.getval(200);
t3.getval(300);
t1.dispcount();
t2.dispcount();
t3.dispcount();
return 0;
}


