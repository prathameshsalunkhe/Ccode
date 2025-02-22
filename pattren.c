/*       *
        * *
       * # *
      * # # *
       * # *
        * *
         *             */

#include<stdio.h>
void main()
{
	int i,j,k,r=7;

	for(i=0;i<r/2+1;i++)
	{
		for(j=0;j<r/2-i;j++)
			printf(" ");
		for(k=0;k<=i;k++)
		{
			//if(k==0 || k==i)
				printf("* ");
			//else
			//	printf("# ");
		}
		printf("\n");
	}
	for(i=0;i<r/2;i++)
	{
		for(j=0;j<=i;j++)
			printf(" ");
		for(k=0;k<r/2-i;k++)
		{
			//if(k==0 || k==r/3-i)
				printf("* ");
			//else
			//	printf("# ");
		}
		printf("\n");
	}



}








