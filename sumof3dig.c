#include<stdio.h>
void main()
{	
	int num,n1,n2,n3,sum;
	printf("Enter a Number\n");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	sum=n1+n2+n3;
	printf("sum of digit=%d\n",sum);
}
