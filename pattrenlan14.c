#include<stdio.h>
void main()
{
	int i,j,k,l,m,num=7;
	char ch;
	for(i=0;i<num;i++,m++)
	{
		for(j=num,k=0,ch='A';j>i;j--,k++)
		{
			printf("%c",ch+k);
		}
		for(l=0;l<i;l++)
		{
			printf("  ");
		}
		 for(j=num+1,k=i,ch='A'+num-1;j>i+1;j--,k++)
                   {
                          printf("%c",ch-k);
                  }
                   printf("\n");
	}
}
	

