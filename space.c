#include<stdio.h>
void main()
{

int len;
char s[20];
scanf("%[^\n]",s);
for(len=0;s[len];len++);
printf("%d\n",len);
printf("%s\n",s);
}									
