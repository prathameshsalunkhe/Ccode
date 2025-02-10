#include <stdio.h>
void main()
{
	int rev=0,num,temp=0,r;
	printf("Enter Number ");
	scanf("%d",&num);

	for (temp=num;temp;temp=temp/10)
	{
		r=temp%10;
		rev=rev*10+r; 
	}
	if  (num==rev)	
		printf("Number %d  is palindrome \n ",num);
	else	
		printf("Number %d  is Not a palindrome \n ",num);
}
