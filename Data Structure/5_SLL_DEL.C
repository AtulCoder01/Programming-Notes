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
struct node *link;
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
//delete_node_begain.......................
void delete_begain()
{
if(head==NULL)
{
printf("List does not exists:");
}
else
{
printf("**********Final link list**********\n");
x=head;
head=x->link;
x->link=NULL;
free(x);
fflush(stdin);
display();
}
}
//delete node end............................
void delete_end()
{
if(head==NULL)
{
printf("list does not exist:");
}
else
{
x=head;
printf("*************final link list***************\n");
while(x->link!=NULL)
{
z=x;
x=x->link;
fflush(stdin);
}
z->link=NULL;
free(x);
fflush(stdin);
display();
}
}
//delete_given_position..........................
void delete_given_position()
{
int k=0,pos;
if(head==NULL)
{
printf("List does not exist:");
}
else
{
printf("Enter the position:>");
scanf("%d",&pos);
x=head;
while(k!=pos-1 && x->link!=NULL)
{
z=x;
x=x->link;
k++;
fflush(stdin);
}
if(k==pos-1)
{
z->link=x->link;
x->link=NULL;
free(x);
fflush(stdin);
printf("**************Final Link List*************\n");
display();
}
else
{
printf("position Not exist:");
}
}
}
//delete_given_element.......................
void delete_given_element()
{
int ele;
if(head==NULL)
{
printf("List does not exist:");
}
else
{
x=head;
printf("Enter element for matching:>");
scanf("%d",&ele);
while(x->data!=ele && x->link!=NULL)
{
z=x;
x=x->link;
fflush(stdin);
}
if(x->data==ele)
{
z->link=x->link;
x->link=NULL;
free(x);
fflush(stdin);
printf("***************display final link list***********\n");
display();
}
else
{
printf("element does not exist:");
}
}
}