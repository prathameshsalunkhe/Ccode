#include <stdio.h>
void  main()
{
	int a[5],i,j,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter Number ");
	for(i=0;i<ele;)
	{
		scanf("%d",&a[i]); 
		if(a[i]%2==0)
		{
			i++;
		}
	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
		printf("\n");
}
