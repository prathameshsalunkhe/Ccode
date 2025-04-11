#include<stdio.h>
int rec_fun_count( int num );
void main()
{
	int num,m;
	printf("Enter Number\n");
	scanf("%d",&num);
	m=rec_fun_count( num );
	printf("%d\n",m);
}
int rec_fun_count( int num )
{
	static int i,c=1;
	if(num)
	{
		i=num%10;
		if(i%3==0)
		{
			c=c*i;
		}
		rec_fun_count( num/=10 );
		
	}
		else
			return c;

}



