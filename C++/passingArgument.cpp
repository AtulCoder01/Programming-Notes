#include<iostream>
using namespace std;
class time
{
int h,m;
	public:
void getTime(int,int);
void putTime(void);
void sum(time,time);
};
void time :: getTime(int x,int y)
{
h=x;
m=y;
}
void time :: putTime()
{
cout<<"\nHours = "<<h;
cout<<"\nMinuts = "<<m<<"\n";
}
void time :: sum(time t1,time t2)
{
m=t1.m+t2.m;
h=m/60;
m=m%60;
h=h+t1.h+t2.h;
}
int main()
{
time t1,t2,t3;
t1.getTime(3,40);
t2.getTime(4,30);
t3.sum(t1,t2);
t1.putTime();
t2.putTime();
t3.putTime();
return 0;
}
