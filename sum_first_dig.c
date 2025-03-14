#include<stdio.h>
void main()
{
	int a[5]={123,235,89,3425,721},sum=0,i,r=0,ele,j,revi=0,c;
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
	{         
		for(j=a[i];j>0;j/=10)
			r=j%10;
		rev=rev*10+r	

	printf("%d",sum);
	}
	printf("%d",sum);
	printf("\n");
}

