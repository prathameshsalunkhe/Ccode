#include <stdio.h>
void main()
{

	int len,i,j,num;
	char s[20];
	printf("Enter string ");	
	scanf("%[^\n]",s);
	j=0;
	while(s[j])
	{
	printf("%c  %d ",s[j],s[j]);	
	num=s[j];
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}

	if(num==i)
		printf("prime\n");
	else
		printf("not prime\n");
	j++;
	}

}

