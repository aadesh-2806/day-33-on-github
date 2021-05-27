#include<stdio.h>
#include<math.h>

void main()
{	
	int n,i;
	float p1,p2;
	
	printf("hello\nenter size 0f paper=");
	scanf("%f%f",&p1,&p2);
	printf("enter no");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		if(p1<p2)
		{
			p1=p1/2;
			printf("A%d= %f * %f\n",i,p1,p2);
		}
		else
		{
			p2=p2/2;
			printf("A%d= %f * %f\n",i,p1,p2);
		}
	}

	getch();
}
