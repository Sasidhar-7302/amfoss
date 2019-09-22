#include<stdio.h>
#include<string.h>


int main()

{
 
 int n,g=0,i;
 
 scanf("%d\n",&n);
 
 char a[150];
 
 for (i=0; i<n; i++)
 
{
 
 gets(a);
 
 if ( (a[0]=='-'&&a[1]=='-') || (a[1]=='-'&&a[2]=='-')) 
        g--;
 
 if ( (a[0]=='+'&&a[1]=='+') || (a[1]=='+'&&a[2]=='+')) 
        g++;

}
 
 printf("%d\n",g);

}
