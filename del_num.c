#include<stdio.h>
void main()
{

	int i,t,j;
	char s[30]="ar13ms12tr2ong n56u5m" ;
	for(i=0;s[i];i++)
	{
		if(s[i]>48 && s[i]<57)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}


	}
	printf("%s",s);
	printf("\n");

}

