#include <stdio.h>
#include<stdlib.h>

int main()
{
   int a[100][100],i=0,j=0,n,y=0,x=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
           if(i==j)
           x=x+a[i][j];
           if(j==n-i-1)
           y=y+a[i][j];
       }

   }
   if((x-y)>0) 
   {
       printf("%d",(x-y));
   }
   else
   {
       printf("%d",-(x-y));
   }
}
