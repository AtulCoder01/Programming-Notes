#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char name[20];
float cost;
char name1[20];
float cost1;
/*ofstream fout;
fout.open("/root/Desktop/atul.txt");
cout<<"Enter item name :>";
cin>>name;
cout<<"Enter item cost :>";
cin>>cost;
fout<<name<<"\n";
fout<<cost<<"\n";
fout.close();*/
ifstream fin;
fin.open("/root/Desktop/atul.txt");
while(EOF){
fin>>name1;
fin>>cost1;
cout<<"\nItem name = "<<name1;
cout<<"\nItem cost = "<<cost1;}
fin.close();
return 0;
}
