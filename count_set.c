#include<stdio.h>
void main()
{
	int pos,i,j,c=0;
	int b[5],a[5]={11,101,1001,101,10};

	for(i=0;i<5;i++)
	{	
			
		for(c=0,pos=31;pos>=0;pos--)
		{
		
			j=a[i]>>pos&1;
			if(j==1)
			c++;
		//	printf("count %d",j);
		}
			b[i]=c;
		printf(" \n");
	}
	for(j=0;j<5;j++)
		printf("%d",a[j]);
		printf("\n");
}
