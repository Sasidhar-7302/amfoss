#include<stdio.h>
int main()
{
int n,l,a[20],i=0,x=0,y=0;
scanf("%d",&n);
scanf("%d",&l);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>l)
{
	y=y+1;
}
}
printf("%d",y);
}
