#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0,j=0,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=n-i-1;0<j;j--)
       {
           printf(" ");
           
       }
       for(j=n-i-1;j<n;j++)
    {
        printf("#");
    }
   printf("\n");
   
   }
}
