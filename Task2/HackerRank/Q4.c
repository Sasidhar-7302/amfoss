#include<stdio.h>
int main()
{
int n,a[100],i,x=0,y=1;

scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
{
for(i=0;i<n;i++)
{
if(a[0]<a[i])
{
x=a[i];
}
}
if(x==a[i])
{
y=y+1;
}
}
printf("%d",y);
}
