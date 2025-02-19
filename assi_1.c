#include<stdio.h>
void main()
{
	int num,sum=0,dig,r=0,op,temp,i,div,rev=0,mul,c=0;
	printf("Enter Number\n");
	scanf("%d",&num);
	printf("option Are:\n1)Armstrong Number\n2)strong number\n3)perfect\n4)prime\n5)palindrome\n");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			{
				for(temp=num;temp;temp/=10,c++);
				for(temp=num;temp;temp/=10)
				{
					r=temp%10;
					mul=1;
					for(i=c,mul=1;i;i--)
					{
						mul=mul*r;
					}
					sum=sum+mul;

				}
				if(num==sum)
					printf("Number %d is Armstrong\n",num);
				else
					printf("Number %d is Not a  Armstrong\n",num);
				break;
			}
		case 2:
			{
				for(temp=num;temp;temp/=10)
				{
					r=temp%10;
					mul=1;
					for(r;r>0;r--)
					{
						mul=mul*r;
					}
					sum=sum+mul;
				}
				if(sum=num)
					printf("Number %d is strong Number\n",num);
				else
					printf("Number %d is not a strong Number\n",num);
				break;
			}
		case 3:
			{	for(temp=num,i=1;i<temp;i++)
				{	
					div=temp/i;
					if(div%i==0)
						sum=div+sum;	

				}
				if(sum==num)
					printf("%d is perfect \n",num);
				else

					printf("%d is not perfect\n ",num);
				break;
			}
		case 4:
			{
				for(temp=num,i=2;i<temp;i++)
				{       if(temp%i==0)
					break;
				}
				if(i==temp)
					printf("Number is prime\n");
				else
					printf("Number is not prime\n");
				break;
			}
		case 5:
			{
				for (temp=num;temp;temp=temp/10)
				{
					r=temp%10;
					rev=rev*10+r; 
				}
				if  (num==rev)	
					printf("Number %d  is palindrome \n ",num);
				else	
					printf("Number %d  is Not a palindrome \n ",num);
				break;
			}

	}
}
