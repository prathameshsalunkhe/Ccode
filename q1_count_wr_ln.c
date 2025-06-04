#include<stdio.h>
void main(int argc,char ** argv)

{
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not prsnet ");
		return;
	}
	char ch;
	int c=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
			c++;
	}	
	rewind(fp);

	int w=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' '||ch=='\n')
			w++;
	} 
	rewind(fp);

	int d=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch>='0' && ch<='9')
			d++; 
	} 
	rewind(fp);
	printf("Number of line =%d\nNumber of words =%d\nNumber of digits =%d\n",c,w,d);
}


