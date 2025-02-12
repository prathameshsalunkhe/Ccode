#include<stdio.h>
void main()
{
int num;

printf("enter int num:\n");
scanf("%d",&num);

int pos;

for(pos=31;pos>=0;pos--)
{
	printf("%d",num>>pos&1);
	if(pos%8==0)
		printf(" ");
}
printf("\n");

}
