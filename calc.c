#include<stdio.h>
void main()
{

	int num,n1,n2;
	char op;
	printf("Enter Two Number:");
	scanf("%d %d",&n1,&n2);
	printf("Enter The option\n+ Addition\n- Substraction\n* multiplication\n/ Division\n");
	scanf(" %c",&op);

	switch(op)
	{
		case '+':num=n1+n2;
			 printf("Ans= %d\n",num);
			 break;
		case '-':num=n1-n2;
			 printf("Ans= %d\n",num);
			 break;
		case '*':num=n1*n2;
			 printf("Ans= %d\n",num);
			 break;
		case '/':num=n1/n2;
			 printf("Ans= %d\n",num);
			 break;
		default : printf("Invalid Input\n"); 
	}

}
