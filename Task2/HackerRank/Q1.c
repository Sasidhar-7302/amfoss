#include <stdio.h>
#include <stdlib.h>



int main()
{

int a[100],b[100],i,x=0,y=0;
for(i=0;i<3;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<3;i++)
{
    if(a[i]>b[i])
    {
        x=x+1;
    }
    else if (a[i]<b[i]) 
    {
        y=y+1;
    }
}
printf("%d %d",x,y);
}
