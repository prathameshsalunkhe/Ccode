#include <stdio.h>
void main()
{
	int a=0,c=0,j,num,d;
	printf("Enter number");
	scanf("%d",&num);

l:

	

		d=num%10;
		d=d%2;	
		num=num/10;
		if(d==1)
		{	c++;
		}

	if(num)
	goto l;
	printf("odd count is %d\n",c);
}

