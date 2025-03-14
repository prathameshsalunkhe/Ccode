#include<stdio.h>
void main()
{
	int a[7]={5,3,1,2,1,9,6},j,k,t,i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele-1/2;i++)
	{
		for(j=1+i;j<ele/2+1;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
