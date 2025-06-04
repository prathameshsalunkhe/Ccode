#include<stdio.h>
void main(int argc,char ** argv)
{
	FILE *fp;
	fp=fopen(argv[1],"r+");
	if(fp==0)
		printf("File not present");
	char ch;
	int c=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' ' ||ch=='\n')
		{
			printf("%d ",c);
			c=0;
		}
		else
			c++;


	}
			printf("\n");

}
