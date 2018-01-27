#include<iostream>
using namespace std;
class Max
{
int no;
	public:
Max(int no=0)
{
(*this).no=no;//this->no
}
Max& greater(Max &x)
{
if(x.no>no)
{
return x;
}
else
{
return *this;
}
}
void disp(void)
{
cout<<"Greatest value = "<<no;
}
};
int main()
{
Max obj1(30),obj2(20),obj3;
obj3=obj1.greater(obj2);
obj3.disp();
return 0;
}
