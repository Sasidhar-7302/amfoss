#include<stdio.h>
int main()
{
    int i,j,n,a,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a);
        if(a%2==0) 
        {
           s=2;
        }
        for(j=3;j<=a;j=j+2) 
        {
            if(a%j==0) 
            {
                a=a/j;
                s=j;
            }
        }
            if(s>=2)
            {
                printf("%d\n",s);
            }
    }
}
