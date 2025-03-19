#include<stdio.h>

void rev(int*,int*,int);
void print(int*,int);
void del(int*,int);
int main()
{
	int a[6]={12,142,1234,314,78,414};
	int ele,b[6];
	ele=sizeof(a)/sizeof(a[0]);
	print(a, ele);
	rev(a,b,ele);	
	printf("\n");
//	del(b,ele);
	print(b, ele);
}

void rev(int *a,int *b,int ele)
{
	int i,j,r=0,num,rev;
	for(i=0;i<ele;i++)
	{
		for(num=a[i],rev=0,r=0;num;num/=10)
		{
			r=num%10;
			rev=rev*10+r;
			b[i]=rev;
			b[i]/=10;
		}
	}
}
void print(int*b,int ele)
{
	int i;
	for(i=0;i<ele;i++)
	{
		printf("%d ",b[i]);
	}

}

void del(int*b,int ele)
{
	int i;
	for(i=0;i<ele;i++)
	{
	b[i]/=10;
	}
		printf("\n");


}











