#include<stdio.h>
void main()
{
	int i,j,small=0;
	int a[6]={6,1000,3,1,5,9};
	small=a[0];
	for(i=1;i<6;i++)
	{
		if(a[i]<small)
			small=a[i];
	}
	printf("%d\n",small);
}
