#include<stdio.h>
void main()
{
int i=0,j=20,k=30,l=40,r;

printf("i=%d j=%d k=%d l=%d r=%d\n",i,j,k,l,r);

r = i || (j=200) && (k=300) || (l=400);

printf("i=%d j=%d k=%d l=%d r=%d\n",i,j,k,l,r);

}
