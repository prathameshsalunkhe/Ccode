#include<stdio.h>
void main()
{

int len;
char s[20]="prathamesh";
for(len=0;*(s+len);len++);
printf("%d",len);
}									
