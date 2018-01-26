#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,max,min;
clrscr();
printf("Enter the element of array:>\n");
for(i=0;i<10;i++)
{
printf("Enter the %dst element:>",i+1);
scanf("%d",&a[i]);
}
max=min=a[0];
for(i=0;i<10;i++)
{
if(max<a[i])
max=a[i];
else if(min>a[i])
min=a[i];
}
printf("\n\t\tMaximum element of the array:>%d\n\t\tMinimum element of the array:>%d",max,min);
getch();
}