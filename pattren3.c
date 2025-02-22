#include <stdio.h>
void  main()
{
	int i,j,k,m,num=5;
	for(i=0;i<num;i++)
	{
		for(m=0;m<i+1;m++)
		{
				printf(" ");

		}
		for(j=num,k=num*2;j>i+1;j--,k--)
			{
				printf("%d",k-j-j);
			}
				printf("\n");
	}
}
