#include<stdio.h>
#include<conio.h>
#define MAX 20

int q[MAX],front=0,rear=0;
void create();
void traverse();
void insert();
void del();

void main()
{
int j;
clrscr();
create();
traverse();
printf("\n\t\t\t************Enter Your Choice****************");
printf("\nif queue_insert_(type 1)");
printf("\nif queue_delete_(type 2)");
scanf("%d",&j);
switch(j)
{
case 1:
insert();
break;
case 2:
del();
break;
default:
printf("\n*****Choice Not Found******");
}
getch();
}
//create queue..........................
void create()
{
char ch;
front=1;
do
{
rear++;
printf("Enter the element:>");
scanf("%d",&q[rear]);
fflush(stdin);
printf("Do you want continue (type y or n)?");
ch=getchar();
}
while(ch=='y' || ch=='Y');
}
//traverse queue............................
void traverse()
{
int i;
printf("**************Display Queue************\n");
for(i=front;i<=rear;i++)
{
printf("%d\t",q[i]);
fflush(stdin);
}
}
//insert queue....................................
void insert()
{
if(rear==MAX)
{
printf("\n\t\t\t*********Queue Overflow***********");
}
else
{
rear++;
printf("Enter the insert element:>");
scanf("%d",&q[rear]);
traverse();
}
}
//delete queue.................................
void del()
{
if(front==0)
{
printf("********Queue Underflow**********");
}
else if(front==rear)
{
q[front]='\0';
front=rear=0;
printf("\n\t\t*******Now Queue Underflow************");
}
else
{
q[front]='\0';
front++;
traverse();
}
}

