#include<stdio.h>
void main()
{
	char s[20]="p6c 3s1 123ok7";

	int i,c=0;

	for(i=0;*(s+i);i++)
	{
		if(*(s+i)>48 && *(s+i)<57)
			c++;
	}
	printf("%d\n",c);
} 


