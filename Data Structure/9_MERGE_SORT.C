#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,a[100],b[100],c[100],i,j,k;
clrscr();
printf("Enter the range of first sort array:>");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("Enter the %dst element:>",i+1);
scanf("%d",&a[i]);
}
printf("Enter the range of second sort array:>");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %dst element:>",i+1);
scanf("%d",&b[i]);
}
for(i=0,j=0,k=0;i<m &&j<n;)
{
if(a[i]<b[j])
{
c[k]=a[i];
k++,i++;
}
else
{
c[k]=b[j];
k++,j++;
}
}
for(;i<m;)
{
c[k]=a[i];
k++;
i++;
}
for(;j<n;)
{
c[k]=b[j];
k++;
j++;
}
printf("\n**************List of merge element:**************\n");
for(k=0;k<m+n;k++)
{
printf("%d< ",c[k]);
}
getch();
}