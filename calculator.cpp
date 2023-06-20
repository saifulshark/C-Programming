/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the name:",ch);
	//scanf("%c",&ch);
	ch=getchar();
	printf("The frist letter of name is:%c\n",ch);
	return 0;
}

#include<stdio.h>
int main()
{
	char ch;
	printf("enter your name:",ch);
	scanf("%c",&ch);
	printf("the first letter of your name is:%c \n",ch);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int NUM1,NUM2;
	//int Add,Sub,Mul,Div;
	printf("Enter the value of NUM1 and NUM2 for all mathecalculation:",NUM1,NUM2);
	scanf("%d %d",&NUM1,&NUM2);
	printf("%d + %d = %d",NUM1,NUM2,NUM1+NUM2);
	printf("%d - %d = %d",NUM1,NUM2,NUM1-NUM2);
	printf("%d * %d = %d",NUM1,NUM2,NUM1*NUM2);
	printf("%d / %d = %d",NUM1,NUM2,NUM1/NUM2);
}
