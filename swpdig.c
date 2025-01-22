#include <stdio.h>
void main()
{
	int num,n1,n2;
	printf("Enter Number\n");
	scanf("%d",&num);
	printf("Befor Swaping number=%d\n",num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	num=num*10+n1;
	num=num*10+n2;
	printf("After Swaping number=%d\n",num);
	
}


