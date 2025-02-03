#include <stdio.h>
void main()
{
	unsigned int num=0x12345678,r1,r2,r3,r4,r5,r6,r7,r8;
	printf("Befor Swaping=%x\n",num);
		
	r1=num&0xf0000000;
	r1=r1>>4;
	r2=num&0x0f000000;
	r2=r2<<4;
	
	r3=num&0x00f00000;
	r3=r3>>4;
	r4=num&0x000f0000;
	r4=r4<<4;
	
	r5=num&0x0000f000;
	r5=r5>>4;
	r6=num&0x00000f00;
	r6=r6<<4;
	
	r7=num&0x000000f0;
	r7=r7>>4;
	r8=num&0x0000000f;
	r8=r8<<4;
	num=r1|r2|r3|r4|r5|r6|r7|r8;
	
	printf("After Swaping=%x\n",num);
}
