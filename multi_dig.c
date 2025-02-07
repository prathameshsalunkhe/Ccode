#include <stdio.h>
void main()
{
	int a,b,num;
	printf("Enter number");
	scanf("%d",&num);

	a=num%10;
	num=num/10;
	b=num%10;
	num=a*b;
	printf("multiplication of last two digit is %d\n",num);
}

