//print Even factor and wether no's is prime or not prme

#include <stdio.h>
void main()
{
	int num,i,r,c=0;
	printf("Enter Number\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{	c++;
			
			if(i%2==0)
			printf("%d ",i);
		}
	}
	if(c==2)
		printf("\nprime\n");
	else
		printf("\nnot prime\n");
}
