#include<stdio.h>
#include<conio.h>
void main()
{
int temp,a[20],i,j,r;
clrscr();
printf("Enter the range of Array:>");
scanf("%d",&r);
printf("\t\t**********Enter the Array list:************\n");
for(i=0;i<r;i++)
{
printf("Enter the %dst element:>",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<r;i++)
{
for(j=i;j<r;j++)
{
if(a[i]<a[j+1])
continue;
else
{
temp=a[i];
a[i]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\t\t************Enter the sorted list**********\n");
for(i=0;i<r;i++)
{
printf("%d< ",a[i]);
}
getch();
}