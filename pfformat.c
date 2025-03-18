#include<stdio.h>
void main()

{
int i;
char s[10]="program" ;
for(i=0;s[i];i++)
printf("%c ----> %d %o %x\n",s[i],s[i],s[i],s[i]);
}
