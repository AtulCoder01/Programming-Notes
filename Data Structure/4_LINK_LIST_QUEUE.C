#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
#define MAX 50

void create();
void traverse();
void insert();
void del();

struct node
{
int data;
struct node *link;
};
struct node *front,*rear,*ptr;

void main()
{
int ch;
clrscr();
create();
traverse();
printf("\n\t\t\t************Enter Your Choice****************");
printf("\nif queue_create_(type 1)");
printf("\nif queue_traverse_(type 2)");
scanf("%d",&ch);
switch(ch)
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
char choice;
do
{
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter node element:>");
scanf("%d",&ptr->data);
if(front==NULL)
{
ptr->link=NULL;
front=rear=ptr;
fflush(stdin);
}
else
{
rear->link=ptr;
rear=ptr;
fflush(stdin);
}
printf("Do you want to continue (type y or n)?");
choice=getchar();
}
while(choice=='y' || choice=='Y');
}
//traverse queue.....................................
void traverse()
{
ptr=front;
while(ptr->link!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->link;
fflush(stdin);
}
printf("%d\t",ptr->data);
}
//insert queue ...........................................
void insert()
{
if(rear==MAX)
{
printf("*************Queue Overflow***********");
}
else
{
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the element:>");
scanf("%d",&ptr->data);
rear->link=ptr;
ptr->link=NULL;
rear=ptr;
fflush(stdin);
traverse();
}
}
//delete queue...................................
void del()
{
if(front==NULL)
{
printf("****************Queue Underflow***********");
}
else if(front==rear)
{
free(rear);
front=rear=NULL;
fflush(stdin);
printf("****************Now Queue Underflow***********");
}
else
{
ptr=front;
front=front->link;
ptr->link=NULL;
free(ptr);
fflush(stdin);
traverse();
}
}