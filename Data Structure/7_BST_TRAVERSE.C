#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
int data;
struct node *rchild;
struct node *lchild;
};

struct node *T=NULL;
struct node *insert(struct node *T,int N);
void preorder(struct node *T);
int N;

void main()
{
int i;
char ch;
clrscr();
do
{
printf("****Enter the choice******\n");
scanf("%d",&i);
switch(i)
{
case 1:
printf("Enter the node element:>");
scanf("%d",&N);
T=insert(T,N);
break;
case 2:
printf("\n preorder traversing TREE:\n");
preorder(T);
break;
default:
printf("**********choice not found**********");
}
fflush(stdin);
printf("Do you want to continue (type y or n)?");
ch=getchar();
}
while(ch=='Y'||ch=='y');
getch();
}

//create tree....................
struct node *insert(struct node *T,int N)
{
if(T==NULL)
{
T=(struct node*)malloc(sizeof(struct node));
T->lchild=NULL;
T->rchild=NULL;
T->data=N;
}
else if(T->data>N)
T->lchild=insert(T->lchild,N);
else if(T->data<N)
T->rchild=insert(T->rchild,N);
return(T);
}

void preorder(struct node *T)
{
if(T!=NULL)
{
printf("%d ,",T->data);
preorder(T->lchild);
preorder(T->rchild);
}
}