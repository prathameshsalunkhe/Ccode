#include <stdio.h> 
void main()
{
	char ch;
	printf("Enter The char\n");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z')
	printf("ch=%c and it's ASCII=%d\n",ch,ch);

}	
