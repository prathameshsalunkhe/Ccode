#include<stdio.h>
void main()
{
int i ,j,k;
char s[50]="pratha emsh salungvsfs dsg";

for(i=0;s[i];i++)
{
for(j=i+1;j==' ' ||j==0;j++)
{
  if(s[j]=='g')
	for(k=j;k==' ';k++)
	printf("%c",s[i]);
}
}
}








