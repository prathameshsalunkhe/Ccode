#include<stdio.h>
void main()
{
char s[20]="gnidoc coding";
int i,j,t;
for(i=0,j=2;i<2;i++,j--)
{t=s[i];
s[i]=s[j];
s[j]=t;


}
printf("%s\n",s);
}
