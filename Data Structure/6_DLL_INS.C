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
struct node *rlink;
struct node *llink;
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
//create link list.........................
void create()
{
char choice;
x=(struct node*)malloc(sizeof(struct node));
printf("Enter the first node data item:>");
scanf("%d",&x->data);
x->llink=NULL;
x->rlink=NULL;
head=x;
fflush(stdin);
top:
printf("Do you want to continue (type y or n)?");
choice=getchar();
while(choice=='y' || choice=='Y')
{
z=(struct node*)malloc(sizeof(struct node));
printf("Enter the next node data item:>");
scanf("%d",&z->data);
x->rlink=z;
z->llink=x;
x=z;
z->rlink=NULL;
fflush(stdin);
goto top;
}
}
//display link list..........................
void display()
{
int count=0;
if(head==NULL)
{
printf("List does not exist:");
}
else
{
x=head;
printf("****************Display Link List********************\n");
while(x->rlink!=NULL)
{
printf("%d\n",x->data);
count++;
x=x->rlink;
fflush(stdin);
}
printf("%d\n",x->data);
count++;
printf("\nNumber of nodes in the list=%d",count);
}
}
//insert node begain.......................
void insert_begain()
{
x=(struct node*)malloc(sizeof(struct node));
printf("Enter insert node data item:>");
scanf("%d",&x->data);
printf("***************Final Link List***************\n");
if(head==NULL)
{
x->rlink=NULL;
x->llink=NULL;
head=x;
fflush(stdin);
}
else
{
x->rlink=head;
head->llink=x;
x->llink=NULL;
head=x;
fflush(stdin);
}
display();
}
//insert node end.................................
void insert_end()
{
z=(struct node*)malloc(sizeof(struct node));
printf("Enter insert node data item:>");
scanf("%d",&z->data);
if(head==NULL)
{
z->rlink=NULL;
z->llink=NULL;
head=z;
fflush(stdin);
}
else
{
x=head;
while(x->rlink!=NULL)
{
x=x->rlink;
fflush(stdin);
}
z->llink=x;
x->rlink=z;
z->rlink=NULL;
fflush(stdin);
}
display();
}
//insert given position................................
void insert_given_position()
{
int k=1,pos;
struct node *y;
printf("Enter the position:>");
scanf("%d",&pos);
y=(struct node*)malloc(sizeof(struct node));
printf("Enter insert node data item:>");
scanf("%d",&y->data);
if(head==NULL)
{
y->rlink=NULL;
y->llink=NULL;
head=y;
fflush(stdin);
}
else
{
x=head;
while(k!=pos-1 && x->rlink!=NULL)
{
x=x->rlink;
k++;
fflush(stdin);
}
if(k==pos-1)
{
z=x->rlink;
/*y->rlink=x->rlink;
y->llink=z->llink;     //this statement can also use :optional
z->llink=y;
x->rlink=y;  */
x->rlink=y;
y->llink=x;
z->llink=y;
y->rlink=z;
fflush(stdin);
}
else
{
printf("\nposition does not exist:\n");
}
}
display();
}
//insert_given_element............................
void insert_given_element()
{
int ele;
struct node *y;
y=(struct node*)malloc(sizeof(struct node));
printf("Enter element for matching:>");
scanf("%d",&ele);
printf("Enter insert node data item:>");
scanf("%d",&y->data);
if(head==NULL)
{
y->rlink=NULL;
y->llink=NULL;
head=y;
fflush(stdin);
}
else
{
x=head;
while(x->data!=ele && x->data!=NULL)
{
x=x->rlink;
fflush(stdin);
}
if(x->data==ele)
{
z=x->rlink;
y->llink=z->llink;
y->rlink=x->rlink;
z->llink=y;
x->rlink=y;
fflush(stdin);
}
else
{
printf("Element not find:");
}
}
display();
}