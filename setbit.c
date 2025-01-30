#include<stdio.h>
void main()
{
 	char ch;
	int bitpos;
	printf("Enter 1 byte number :\n");
	scanf("%hhd",&ch);
	printf("Entr bit position :");
	scanf("%d",&bitpos);
	printf("Befor shift %hhd\n",ch);
	ch=ch|1<<bitpos;
	printf("After shift %hhd \n",ch);
}

