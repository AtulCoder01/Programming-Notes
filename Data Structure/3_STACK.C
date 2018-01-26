#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
int item,top=-1,stack[5];

void main()
{
char choice;
int ch;
clrscr();
printf("if apply push operation (type 1)\n");
printf("if apply pop operation (type 2)\n");
do
{
printf("Enter your choice:>");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
default:
printf("************Choice Not Found*********\n");
}
fflush(stdin);
printf("Do you want to continue (type y or n)?");
choice=getchar();
}
while(choice=='y' || choice=='Y');
getch();
}

void push()
{
if(top<4)
{
printf("Enter the element:>");
scanf("%d",&item);
top++;
stack[top]=item;
}
else
{
printf("\n\t\t*****stack overflow******");
}
display();
}

void pop()
{
if(top>-1)
{
top--;
}
else
{
printf("\n\t\t**********stack underflow***********");
}
display();
}

void display()
{
int i;
printf("\n\t\t**********Display Stack List*******\n");
for(i=top;i>-1;i--)
{
printf("%d\n",stack[i]);
}
}