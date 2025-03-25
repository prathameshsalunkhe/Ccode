#include<stdio.h>
void main()
{
	char s[20];
	int i,j,len,c;
	printf("Enter string\n");
	scanf("%[^\n]",s);
	for(len=0;s[len];len++);
	for(i=0;i<len;i++)
	{
		if(s[i]!=' '&&s[i])
		{
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				c++;
			}

		}
	}
			printf("vowels count=%d\n",c);
}
