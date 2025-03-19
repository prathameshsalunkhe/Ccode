#include<stdio.h>
void rev(int *,int *,int);
void main()
{
	int b[6],ele;
	int a[6]={12,42,123,34,78,414};
	ele=sizeof(a)/sizeof(a[0]);
	 rev( a, b, ele);
}
void rev(int *a,int *b,int ele)
{
	int i,j,t;
	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n ");
}
