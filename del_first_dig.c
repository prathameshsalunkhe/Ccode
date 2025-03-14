#include<stdio.h>
void main()
{
	int a[5]={123,235,89,3425,721},b[5],sum=0,i,r=0,ele,j,rev,k;
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
	{         
	printf("%d ",a[i]);
		for(j=a[i],rev=0,r=0;j;j/=10)
		{	
			r=j%10;
			rev=rev*10+r;
		}
		rev/=10;
		b[i]=rev;


	}
	printf("\n");
	for(i=0;i<ele;i++)
	{		for(j=b[i],rev=0,r=0;j;j/=10)
		{	
			r=j%10;
			rev=rev*10+r;	
		}
		printf("%d ",rev);
	}	
	//	printf("%d",sum);
	printf("\n");
}

