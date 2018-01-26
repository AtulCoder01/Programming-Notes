#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void create();
void display();
void insert_begain();
void insert_end();
void insert_given_position();
void insert_given_element();

struct node
{
int data;
struct node *link;
}*x,*z,*head;

void main()
{
int ch;
clrscr();
create();
display();
printf("\n*************Enter your choice:*****************");
printf("\nif insert_begain_(type 1)");
printf("\nif insert_end_(type 2)");
printf("\nif insert_given_position_(type 3)");
printf("\nif insert_given_element_(type 4)\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert_begain();
break;
case 2:
insert_end();
break;
case 3:
insert_given_position();
break;
case 4:
insert_given_element();
break;
default:
printf("Choice does not found\n");
printf("**************Bye Bye***************");
}
getch();
}
//create link list..............
void create()
{
char choice;
x=(struct node*)malloc(sizeof(struct node));
printf("Enter the first node data item:>");
scanf("%d",&x->data);
x->link=NULL;
head=x;
fflush(stdin);
top:
printf("Do you want to continue (type y or n)?");
scanf("%c",&choice);
while(choice=='y'||choice=='Y')
{
z=(struct node*)malloc(sizeof(struct node));
printf("Enter the next node data item:>");
scanf("%d",&z->data);
x->link=z;
z->link=NULL;
x=z;
fflush(stdin);
goto top;
}
}
//Display link list.................
void display()
{
int count=0;
if(head==NULL)
{
printf("*********List does not exist********");
}
else
{
printf("***********Display link list***********\n");
z=head;
while(z->link!=NULL)
{
printf("%d\n",z->data);
count++;
z=z->link;
fflush(stdin);
}
printf("%d",z->data);
count++;
printf("\nNumber of nodes in the list=%d",count);
}
}
//insert_node_begain.......................
void insert_begain()
{
x=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the insert begain node data item:>");
scanf("%d",&x->data);
printf("**********Display Final Link List*********\n");
if(head==NULL)
{
x->link=NULL;
head=x;
fflush(stdin);
}
else
{
x->link=head;
head=x;
fflush(stdin);
}
display();
}
//insert node end.................
void insert_end()
{
x=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the insert end node data item:>");
scanf("%d",&x->data);
printf("**********Display Final Link List*********\n");
if(head==NULL)
{
x->link=NULL;
head=x;
fflush(stdin);
}
else
{
z=head;
while(z->link!=NULL)
{
z=z->link;
fflush(stdin);
}
z->link=x;
x->link=NULL;
}
display();
}
//insert ginen position..............
void insert_given_position()
{
struct node *y;
int k=1,pos;
printf("Enter the position:>");
scanf("%d",&pos);
x=(struct node*)malloc(sizeof(struct node));
printf("Enter the node data item:>");
scanf("%d",&x->data);
if(head==NULL)
{
x->link=NULL;
head=x;
fflush(stdin);
display();
}
else
{
z=head;
while(k!=pos-1 && z->link!=NULL)
{
z=z->link;
k++;
fflush(stdin);
}
if(k==pos-1)
{
y=z->link;
x->link=y;
z->link=x;
fflush(stdin);
display();
}
else
{
printf("position can not found:");
}
}
}
//insert ginen element..............
void insert_given_element()
{
struct node *y;
int ele;
printf("Enter the element for matching:>");
scanf("%d",&ele);
x=(struct node*)malloc(sizeof(struct node));
printf("Enter the node data item:>");
scanf("%d",&x->data);
if(head==NULL)
{
x->link=NULL;
head=x;
fflush(stdin);
display();
}
else
{
z=head;
while(z->data!=ele && z->link!=NULL)
{
z=z->link;
fflush(stdin);
}
if(z->data==ele)
{
y=z->link;
x->link=y;
z->link=x;
fflush(stdin);
display();
}
else
{
printf("Element can not found:");
}
}
}