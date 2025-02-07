#include <stdio.h>
void main()
{
	int a=0,c=0,j,num,d;
	printf("Enter number");
	scanf("%d",&num);

l:
	d=num%10;
	num=num/100;
	//num=num/10;
	a=a+d;

	if(num)	
	goto l;
	printf("odd count is %d\n",a);
}

