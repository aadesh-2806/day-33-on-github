#include<stdio.h>

void main()
{
	
	int a,i,t,n;
	
	printf("hello\nenter no =");
	scanf("%d",&n);
	
	i=1;
	t=n;										//adding one
	while(n/10!=0)
	{
		n=n/10;
		i++;
	}
	
	n=1;
	a=0;
	while(i>0)
	{
		a=n+a;
		n=n*10;
		i--;
	}
	a=a+t;
	printf("%d",a);
	
	getch();
	
}	
