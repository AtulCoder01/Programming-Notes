#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,r,ele,mid,lb,ub;
clrscr();
printf("Enter the range of Array:>");
scanf("%d",&r);
printf("**********Enter the sorted Array List********\n");
for(i=0;i<r;i++)
{
printf("Enter the %dst element:>",i+1);
scanf("%d",&a[i]);
}
printf("Enter the Search Element:>");
scanf("%d",&ele);
lb=0,ub=r;
while(lb<=ub)
{
mid=(lb+ub)/2;
if(a[mid]==ele)
break;
else if(a[mid]>ele)
ub=mid-1;
else if(a[mid]<ele)
lb=mid+1;
}
if(a[mid]==ele)
printf("\n\t\t\tElement is present in the list:");
else
printf("\n\t\t\tElement is not present in the list:");
getch();
}