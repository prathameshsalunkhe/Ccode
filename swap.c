#include <stdio.h>

void main()
{
	int a=10,b=20,tem;
	printf("inatial value a=%d b=%d\n",a,b);
	printf("Enter any two number\n");
	scanf("%d%d",&a,&b);
	printf("Before Swaping a=%d b=%d\n",a,b);
	tem=a;
	a=b;
	b=tem;
	printf("After Swaping a=%d b=%d\n",a,b);
}
