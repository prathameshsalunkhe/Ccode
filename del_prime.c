#include<stdio.h>
void main()
{

	int i,t,j,k,num;
	char s[30]="ar135tms12tr2ong n56u5m" ;
	for(k=0;s[k];k++)
	{
         //printf("1");

		if(s[k]>='0' && s[k]<='9')
		{ num=s[k]-48;
                   
			for(i=2;i<num;i++)
			{
				if(num%i==0)
					break;
			}
			if(num==i)
			{
				//printf("prime");
				for(j=k;s[j];j++)
					s[j]=s[j+1];
                               k--;
			}

		}


	}
	printf("%s",s);
	printf("\n");

}

