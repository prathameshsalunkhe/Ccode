#include<stdio.h>
int rec_fun_count( int num );
void main()
{
	int num,m;
	printf("Enter Number\n");
	scanf("%d",&num);
	m=rec_fun_count( num );
	printf("%d",m);
}
int rec_fun_count( int num )
{
	static int i,c;
	if(num)
	{
		i=num%10;
		if(i<6)
		{
			c++;
		}
		rec_fun_count( num/=10 );
		
	}
		else
			return c;

}



