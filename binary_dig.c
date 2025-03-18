#include<stdio.h>
void main()
{
	char s[20]="123helii6";

	int i,sum=0,pos;

	for(i=0;*(s+i);i++)
	{
		for(pos=7;pos>=0;pos--)
		printf("%d",s[i]>>pos&1);
   		printf("\n");

	}
	printf("\n");
} 


