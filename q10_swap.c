#include<stdio.h>
#include<math.h>

void main()
{	
	int n,j,t;
	
	printf("hello\nenter values a&b resp=");
	scanf("%d%d",&n,&j);
	
	n=n+j;
	j=n-j;
	n=n-j;
	printf("a=%d b=%d",n,j);	
	
	getch();
}
