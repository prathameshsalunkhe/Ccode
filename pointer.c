#include <stdio.h>
void main()
{
	int a[5]={11,22,33,44,55},i;
	for(i=0;i<5;i++)
	{
		printf("%d ",*(a+i));
	}
	printf("\n");
}
