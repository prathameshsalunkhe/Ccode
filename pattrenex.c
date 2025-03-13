#include<stdio.h>
void main()
{
	int num=5,i,j,k,l;
	for(i=1;i<num;i++)
	{
		for(l=num;l>i;l--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
			if(j==0)
			printf("* ",j);
			else
			printf("%c ",'A'+j-1);
		printf("\n");
	}
		for(k=0;k<num;k++)
		{
		printf("* ");
		}
		printf("\n");
}
