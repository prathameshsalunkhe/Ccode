#include <stdio.h>
void main()
{
	int a=0,c=0,j,num,d;
	printf("Enter number");
	scanf("%d",&num);
l:
	d=num%10;
	j=d%3;	
	num=num/10;

	if(j==0)
		c=c+d;

	if(num)
		goto l;
	printf("sum of dig divisible by three is %d\n",c);
}

