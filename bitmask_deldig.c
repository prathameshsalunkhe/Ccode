#include <stdio.h>
void main()
{
	unsigned int num=93,r1,r2;
	printf("Befor Swaping=%x %d \n",num,num);
		//num=num|0x00000000;
		r1=num>>3;
		r1=num<<1;
		r2=num<<7;
		r2=r2>>7;
		num=r1|r2;
	
	printf("After Swaping=%x\n",num);
}
