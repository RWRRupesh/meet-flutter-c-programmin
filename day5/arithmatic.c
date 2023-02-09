/*wap to perform various arithmatic tasks..*/
#include<stdio.h>

void main()
{
	int a,b,c;

	printf("Enter the value of a = ");
	scanf("%d",&a);
	printf("Enter the value of b = ");
	scanf("%d",&b);

	c=a+b;
		printf("the addition of two numbers is =%d\n ",c);
	c=a-b;
		printf("the substraction of two numbers is =%d\n ",c);
	c=a*b;
		printf("the multiplecation of two numbers is =%d\n ",c);
	c=a/b;
		printf("the division of two numbers is =%d\n ",c);
	c=a%b;
		printf("the Reminder of two numbers is =%d\n ",c);
}