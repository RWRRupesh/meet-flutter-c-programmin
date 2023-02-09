/*Wap To find min using Conditional Operator*/

#include<stdio.h>

void main()
{
	int a,b,min;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);

	min=a>b?b:a;				//condition ? true:false

	printf("the min value is = %d\n", min);		

}

