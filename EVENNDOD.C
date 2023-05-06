#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	int n;
	printf("enter the no.=");
	scanf("%d",&n);

	(n%2==0)?printf("this number is even number",n):printf("this number is odd number",n);

	getch();
}                  