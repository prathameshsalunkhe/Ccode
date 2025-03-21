#include<stdio.h>
void main()
{
	int i,j,len,t;
	char s[20];
	printf("Enter string \n");
	scanf("%[^\n]",s);
	len=0;
	while(s[len])
	{
		len++;
	}
	printf("len=%d\n",len);

	i=0,j=len-1;
	while(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;
		j--;

	}
	printf("%s",s);
	printf("\n");


}



