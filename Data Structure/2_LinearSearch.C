#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,r,ele;
clrscr();
printf("Enter the range of Array:>");
scanf("%d",&r);
printf("**********Enter the Array List********\n");
for(i=0;i<r;i++)
{
printf("Enter the %dst element:>",i+1);
scanf("%d",&a[i]);
}
printf("Enter the Search Element:>");
scanf("%d",&ele);
for(i=0;i<r;i++)
{
if(a[i]==ele)
break;
else
continue;
}
if(a[i]==ele)
printf("\n\t\t\tElement is present in the list:");
else
printf("\n\t\t\tElement is not present in the list:");
getch();
}