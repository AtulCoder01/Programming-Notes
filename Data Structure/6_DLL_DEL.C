#include<stdio.h>
#include<conio.h>
#include<alloc.h>

void create();
void display();
void delete_begain();
void delete_end();
void delete_given_position();
void delete_given_element();

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
printf("\nif delete_begain_(type 1)");
printf("\nif delete_end_(type 2)");
printf("\nif delete_given_position_(type 3)");
printf("\nif delete_given_element_(type 4)\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
delete_begain();
break;
case 2:
delete_end();
break;
case 3:
delete_given_position();
break;
case 4:
delete_given_element();
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
//delete_node_begain.......................
void delete_begain()
{
if(head==NULL)
{
printf("List is Empty:");
}
else
{
x=head;
head=x->rlink;
x->rlink=NULL;
head->llink=NULL;
free(x);
fflush(stdin);
printf("****************Final Link List******************\n");
display();
}
}
//delete node end....................................
void delete_end()
{
if(head==NULL)
{
printf("********List Empty**********");
}
else
{
x=head;
while(x->rlink!=NULL)
{
z=x;
x=x->rlink;
fflush(stdin);
}
z->rlink=NULL;
x->llink=NULL;
free(x);
fflush(stdin);
printf("**************Final Link List**************\n");
display();
}
}
//delete node given position...........................
void delete_given_position()
{
int k=0,pos;
struct node *y;
printf("Enter the position:>");
scanf("%d",&pos);
if(head==NULL)
{
printf("******List Empty*********");
}
else
{
x=head;
while(k!=pos-1 && x->rlink!=NULL)
{
z=x;
x=x->rlink;
k++;
fflush(stdin);
}
if(k==pos-1)
{
y=x->rlink;
z->rlink=x->rlink;
y->llink=x->llink;
x->rlink=NULL;
x->llink=NULL;
free(x);
fflush(stdin);
display();
}
else
{
printf("\n******Position not exist************");
}
}
}
//delete node given element.................................
void delete_given_element()
{
int ele;
struct node *y;
printf("Enter element for matching:>");
scanf("%d",&ele);
if(head==NULL)
{
printf("******List Empty***********");
}
else
{
x=head;
while(x->data!=ele && x->rlink!=NULL)
{
z=x;
x=x->rlink;
fflush(stdin);
}
if(x->data==ele)
{
y=x->rlink;
z->rlink=y;
y->llink=z;
x->rlink=NULL;
x->llink=NULL;
free(x);
fflush(stdin);
display();
}
else
{
printf("*******Element does not exist*******");
}
}
}