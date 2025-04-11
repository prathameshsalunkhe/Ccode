#include<stdio.h>
int rec_fun_rev( int );
void main()
{
	int num,i,rev,m;
	printf("Enter the Number\n");
	scanf("%d",&num);

	m=rec_fun_rev(num);
	printf("%d\n",m);
}

int rec_fun_rev( int num )
{

	static int i,rev,sum;
	if(num)
	{
		i=num%10;
		rev=rev*10+i;
		rec_fun_rev(num/10 );

	}
	else 
		return rev;
}
