#include<stdio.h>
#include<math.h>

void main()
{	
	int n,j,t;
	 
	printf("hello\nenter cp and sp=");
	scanf("%d%d",&n,&j);
	
	if(j>n)
	{
		 printf("profit=%d",(j-n));
	}
	else
	{
		if(j==n)
		{
			printf("no profit & loss");
		}
		else
		{
			printf("loss=%d",(n-j));
		}
	}
	getch();
}
