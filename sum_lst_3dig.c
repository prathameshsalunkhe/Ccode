#include<stdio.h>
int rec_fun_product( int num );
void main()
{
	int num,m;
	printf("Enter Number\n");
	scanf("%d",&num);
	m= rec_fun_product(num);
	printf("%d\n",m);
}
int rec_fun_product(int num)
{
	static int i,j,sum;

	if(i<3)
	{
		j=num%10;
		sum=sum+j;
		i++;
		rec_fun_product( num/10 );
	}	
	else
		return sum; 

}



