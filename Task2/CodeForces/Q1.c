#include <stdio.h>




int main()

{
    
int a, n, m, l, w;
    
scanf("%d,%d,%d",&n,&m,&a);
    
    
l= n/a;
    
w= m/a;
    
    
if(n % a != 0) l++;
    
if(m % a != 0) w++;
    
    
printf("%d",(l*w));
   

}


