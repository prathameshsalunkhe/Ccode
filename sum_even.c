#include<stdio.h>
int rec_fun_sum(int);
void main()
{
	int num,m;
	printf("Enter Number");
	scanf("%d",&num);
	m=rec_fun_sum(num);
	printf("%d",m);
}

int rec_fun_sum( int num )
{
static int i,sum;
if(num)
{
i=num%10;
if(i%2==0)
{
sum=sum+i;
}
rec_fun_sum(num/10);
}
else
return sum;
}
