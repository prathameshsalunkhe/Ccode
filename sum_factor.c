#include <stdio.h>
void main()
{
	int num,i,sum=0,c=0,r;
	printf("Enter Number\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{	printf("%d ",i);
			sum=sum+i;
			c++;
		}
	}

	printf("\ncount:%d\nsum:%d \n",c,sum);
}

