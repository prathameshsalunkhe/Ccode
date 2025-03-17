#include<stdio.h>
void main()
{
	int pos,i,j,c=0;
	int a[5]={11,101,1001,101,10};

	for(i=0;i<5;i++)
	{	
			
		for(c=0,pos=31;pos>=0;pos--)
		{
		
			j=a[i]>>pos&1;
			if(j==1)
			c++;
			printf("%d",j);
		}
		printf(" set=%d clear=%d ",c,32-c);
		printf(" \n");
	}
		printf("\n");
}
