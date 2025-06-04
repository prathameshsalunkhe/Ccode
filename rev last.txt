#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max_line(FILE *);
int count_line(FILE *);
void rev_word(char *);


void main(int argc,char **argv)
{
	int max,line,end,start,i,j,len,k,m,n,flag;
	char **s;
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(argc!=2)
	{
		printf("Usage: ./a.out file ");
		return;
	}
	char ch;
	//	int n=argv[2][0]-48;

	max=max_line(fp);
	line=count_line(fp);
	//	printf("%d %d\n",max,line);
	s=(char**)malloc(sizeof(char*)*line);
	for(i=0;i<line;i++)
		s[i]=(char*)malloc(sizeof(char*)*(max+1));

	for(i=0;i<line;i++)
	{	
		fgets(s[i],(max+2),fp);
		len=strlen(s[i]);
		j=0,start=0,end=0;
		while(s[i][j])
		{
			//	printf("%c\n",s[i][j]);
			while(s[i][j]==' '||s[i][j]=='\t')
				j++;
			start=j;
			while(s[i][j]!=' '&&s[i][j]!='\t'&&s[i][j]!='\0')
				j++;
			end=j-1;

		}

		flag=end-start;
		if(flag>5)
		{
			rev_word(s[i]);

			printf("%s\n",s[i]);
		}



	}
	fclose(fp);
	fp=fopen(argv[1],"w");
	for(i=0;i<line;i++)
	fputs(s[i],fp);
	fclose(fp);


}


int max_line(FILE *fp)
{
	int c=0,max=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{

		c++;
		if(ch=='\n')
		{

			if(c>max)
				max=c;
			c=0;

		}
	}
	rewind(fp);
	return max;

}

int count_line(FILE *fp)
{
	int line=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
			line++;
	}
	rewind(fp);
	return line;

}



void rev_word(char *s)
{
	int i=0,len,j;
	char ch;
	len=strlen(s);
	for(j=len-2;s[j]!=' ';j--);
	for(i=len-2,j=j+1;j<i;j++,i--)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;



	}

}
