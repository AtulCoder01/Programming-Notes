#include<iostream>
using namespace std;
inline int max(int,int);
	
int main()
{
int a,b;
cout<<"Enter two value:\n";
cin>>a>>b;
cout<<"Greater value is "<<max(a,b);
return 0;
}
inline int max(int x,int y)
	{
	return ((x>y)?x:y);
	}
