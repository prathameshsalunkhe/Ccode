#include <stdio.h>
void main()
{
	int i,j,k,c=0;
	for(i=0;i<=5;i++)
	{
		for(j=0;i>j;j++)
		{
			if(j==1)
			{	
				printf("%c",'A'+c);
			        c++;
				}		
			else printf("*");
		}
				printf("\n");
	}
}



