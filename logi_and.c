#include<stdio.h>
void main()
{
	int i=1,j=3,k;
	k=i&&j;
	printf("k=%d i=%d j=%d\n",k,i,j);

	
	k=i&& (j=20);
	printf("k=%d i=%d j=%d\n",k,i,j);

}
 
