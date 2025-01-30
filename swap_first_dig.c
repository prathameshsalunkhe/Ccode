#include<stdio.h>
void main()
{
	int num,n1,n2,n3,n4;
	printf("Enter any four digit number :");
	scanf("%d",&num);
	
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;

	num=num*10+n3;
	num=num*10+n4;
	num=num*10+n2;
	num=num*10+n1;
	printf("swaped number is %d\n",num);
}

