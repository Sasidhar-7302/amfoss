#include <stdio.h>
int main()
{
    int n,i,j,k=0,a[20],a1=1,a2=2,a3,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        for(j=1;j<=a[i];j++)
        {
            {
                if(j<=2)
                a3=j;
                else
                {
                a3=a1+a2;
                a1=a2;
                a2=a3;
                a[k]=a3;
                k++;
                }
                
            }
                for(k=1;(a[k])<a[i];k++)
                {
                if((a[k])%2==0)
                sum=sum+a[k];
                }
                printf("%d",sum);
        }
    }
}
