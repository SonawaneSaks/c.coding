#include<stdio.h>
#include<conio.h>
void main ()
{
	int p,r,n,si;
	printf("enter the value for p,n,r");
	scanf("%f%f%f",&p,&r,&n);

	si =(p*r*n)/100;
	printf("simple interest is %f",si);
	getch();
}
