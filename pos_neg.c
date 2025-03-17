#include<stdio.h>
void main()
{
	int pos,i,j,c=0;
	int a[5]={-11,101,1001,101,-10};

	for(i=0;i<5;i++)
	{	
			
		//for(pos=31;;pos--)
		
		
			j=a[i]>>31&1;
			if(j==1)
			printf("number %d is Negative",a[i]);
			else
			printf("number %d is Positive",a[i]);
			
	
		//printf(" set=%d clear=%d ",c,32-c);
		printf(" \n");
	}
		printf("\n");
}
