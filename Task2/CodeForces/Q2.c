#include<stdio.h>

#include<ctype.h>

int main()
{
    
	int n,i,j;

	char yu[1000];

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		scanf("%s",&yu);

		int l=strlen(yu);


	if(l>4)
	{

    
		printf("%c",yu[0]);
    
		printf("%d",l-2);
    
		printf("%c\n",yu[l-1]);


	}

	else printf("%s\n",yu);
	}


}



