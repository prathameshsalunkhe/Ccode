#include<stdio.h>
void main()
{
	int a[5],i,j,t,ele;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter ele\n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=0;i<ele;i++)
	{ 
		if(a[i]<a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;

		}
	}
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);

	}
		printf("\n");
}

