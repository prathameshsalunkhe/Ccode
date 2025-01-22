#include <stdio.h>
void main()
{
	int n1,n2;
	printf("Enter any two number\n");
	scanf("%d %d",&n1 ,&n2);
	printf("Befor swap n1=%d n2=%d\n",n1,n2);
	
	/*n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;*/

	n1=n1*n2/(n2=n1);
	
	printf("After swap n1=%d n2=%d\n",n1,n2);
}
