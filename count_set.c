#include<stdio.h>
void main()
{
	char s[20]="@123heliiABC";

	int i,sum=0,pos,c=0,n,num=65;

	for(c=0,i=0;*(s+i);i++)
	{
		for(c=0,pos=31;pos>=0;pos--)
		{
		n=s[i]>>pos&1;
		if(n==1)
		c++;
		}
   		printf("char=%c %d ",s[i],c);

	}
	printf("\n");
} 


