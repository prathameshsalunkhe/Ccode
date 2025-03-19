#include <stdio.h>
int count_dig (int *,int *,int );
int* print  (int *,int);
void main()
{

	int a[]={1,22,121,34,78,444};
	int i,j,r,sum,ele;
	int b[ele];
	ele=sizeof(a)/sizeof(a[1]);
	
	 count_dig (a,b,ele );
	 print  (b,ele);
}
int count_dig (int *a,int *b,int ele)
{	int i,sum,r;
	
	for(i=0;i<ele;i++)
	{
		for(sum=0,r=0;a[i];a[i]/=10)
		{
			r=a[i]%10;
			sum=sum+r;
		}
		b[i]=sum;
	}
}
int* print (int *b,int ele)
{
	int j ;
	for(j=0;j<ele;j++)
		printf("%d ",b[j]);
		printf("\n ");
}

