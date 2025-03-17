#include<stdio.h>
void main()
{
	int pos,i,j,c=0,k,l=0,n,ele;
	int a[]={-11,11,12,-12,9,8,-3,10,22};
	ele=sizeof(a)/sizeof(a[1]);
	n=ele;
	for(i=0;i<ele;i++)
	{	
		//for(pos=31;;pos--)
		
			j=a[i]>>31&1;
			if(j==1)
			c++;
			if(a[i]>0)
			k=a[i]&1;
			if(k==1)
			l++;
	}
		printf(" Neagtive=%d positive=%d odd=%d even=%d  ",c,ele-c,l,n-l-c);
		printf("\n");
			printf("number %d is Negative",a[i]);
			
}
