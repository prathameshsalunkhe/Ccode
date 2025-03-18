#include<stdio.h>
void main()
{
	char s[20]="123helii6";

	int i,sum=0;

	for(i=0;*(s+i);i++)
	{
		if(*(s+i)>48 && *(s+i)<57)
			sum=sum+s[i]-48;
	}
	printf("%d\n",sum);
} 


