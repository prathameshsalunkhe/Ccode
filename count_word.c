#include<stdio.h>
void main()
{
	int i ,j=0,k,c=0,len;
	char s[50]="pratha em salunkhe";
	printf("%s\n",s);
	for(len=0;s[len];len++);
	for(i=0,c=0;i<=len;i++)
	{
		if(s[i]!=' '&&s[i] )
			c++;
		else
		{
			printf("%d ",c);
			c=0;
		}

	}
	//printf("%d",c);
}
