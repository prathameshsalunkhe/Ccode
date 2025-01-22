#include <stdio.h>
void main()
{
	int num,lastdig;
	printf("Enter the number\n");
	scanf("%d",&num);
	lastdig= num%10;
	printf("Number=%d Last digit of that number=%d\n",num,lastdig);
}


