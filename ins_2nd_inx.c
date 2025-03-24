#include<stdio.h>
void main()
{
int i,j,len ;
char s[20]="prathamesh salunkhe";
for(len=0;s[len];len++);
for(i=len;i>=0;i--)

s[i+2]=s[i];
s[0]='1';

s[1]='2';



printf("%s",s);
}


