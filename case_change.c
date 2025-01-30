#include<stdio.h>
void main()
{	
	char ch;
	printf ("Enter char:\n");
	scanf("%c",&ch);
	printf("ch=%c\n",ch);
	ch=ch^32;
	printf("ch=%c\n",ch);
}
