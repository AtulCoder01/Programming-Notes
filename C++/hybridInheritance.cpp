#include<iostream>
using namespace std;
class student
{
int roll;
	public:
void getroll(int x)
{
roll=x;
}
void putroll()
{
cout<<"\nRoll Number = "<<roll;
}
};

class test : public student
{
	protected:
		float t2,t1;
	public:
		void getmarks(float x,float y)
		{
		t1=x;
		t2=y;
		}
		void putmarks()
		{
		cout<<"\nMarks Obtainted:";
		cout<<"\nTest 1 = "<<t1;
		cout<<"\nTest 2 = "<<t2;
		}
};
 
class sports
{
	protected:
		float sp;
	public:
		void getsp(float x)
		{
		sp=x;
		}
		void putsp()
		{
		cout<<"\nSports Score = "<<sp;
		}
};

class result : public test,public sports
{
float total;
	public:
void disp();
};
void result :: disp()
{
total=t1+t2+sp;
putroll();
putmarks();
putsp();
cout<<"\nTotal score = "<<total;
}

int main()
{
result obj;
obj.getroll(1501504005);
obj.getmarks(45.4,84.3);
obj.getsp(9.4);
obj.disp();
return 0;
}
