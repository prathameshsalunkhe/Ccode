
#include<stdio.h>
int main()
{
char a;
int b;
short int c;
float d;
double e;
printf("%ld\n",2+sizeof(d));		//6
printf("%ld\n",sizeof(a+b));		//4
printf("%ld\n",sizeof(a+c));		//4
printf("%ld\n",sizeof(a+3.0));		//8
printf("%ld\n",sizeof(a,c,e));		//8
printf("%ld\n",sizeof(e,a)+4);		//5
printf("%ld\n",sizeof(0x11));		//4
printf("%ld\n",sizeof(011));		//4
printf("%ld\n",sizeof(1+1.0));		//8
printf("%ld\n",sizeof('a'));		//4
printf("%ld\n",sizeof(a));		//1
printf("%ld\n",sizeof(55.5));		//8
}

