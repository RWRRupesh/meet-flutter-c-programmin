/*use logical operator in if statement*/
#include<stdio.h>

void main()
{
	int a=10,b=8,c=12;

	if(a>b && a>c)
	{
		printf("A is Bigger\n");
	}
	else if(b>c){
		printf("b is Bigger");
	}
	else{
		printf("C is Bigger\n");
	}
}