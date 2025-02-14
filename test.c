#include <stdio.h>
void main()
{
	int num,rev=0,i=0,d=0,temp;

	//num=13456892;
	//printf("Enter number\n");
	scanf("%d",&num);
	temp=num;
	if(num>0)
	{

		for(;temp;temp=temp/10)
		{	d=temp%10;

			if(d%3==0) 
				d=1;
			rev=rev*10+d;
		}
		for(;rev;rev=rev/10)
		{
			d=rev%10;
			i=i*10+d;
		}

		printf("%d\n",i);
	}
	else
		printf("invalid input");
}
