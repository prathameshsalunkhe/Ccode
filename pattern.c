/*
odd
 1
 13
 135 
 1357*/



/*
Even
 2
 24
 246
 2468

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			//printf("%d",j+j+1);//odd 
			printf("%d",j+j+2);//Even
		}
			printf("\n");
	}

}


