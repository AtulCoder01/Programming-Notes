#include<iostream>
using namespace std;
class Sum
{
int a,b,t;//by default private
public:
void getData(void);
void putData(void);
};

void Sum :: getData(void)
{
cout<<"Enter value of a & b:\n";
cin>>a>>b;
}

void Sum :: putData(void)
{
t=a+b;
cout<<"Addition of "<<a<<" and "<<b<<" is "<<t<<"\n";
}

int main()
{
Sum obj;
obj.getData();
obj.putData();
return 0;
}
