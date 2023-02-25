#include<stdio.h>
#include<conio.h>

void main ()

{
	const float pi=3.14;
	printf("value of pi is %f",pi);

	pi=1.2;   //this statement give error because pi made const
	printf("value of pi is %f",pi);
	getch();
}

