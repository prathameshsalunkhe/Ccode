#include <stdio.h>
void main()
{
	
	/* without type cating*/
	/*
	unsigned int i=2000000000,j=3,k;
	k=i*j;
	printf("k=%u\n",k);
	*/
	
	/* with implicite type cating*/

	unsigned int i=2000000000;
	unsigned long int j=3,k;
	k=i*j;
	printf("k=%lu\n",k);
	
	
	/* with explicite type cating*/
	
	/*
	unsigned int i=2000000000,j=3;
	unsigned long int k;
	k=(unsigned long int)i*j;
	printf("k=%lu\n",k);
	
	*/

}

