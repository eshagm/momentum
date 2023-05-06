#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char n;
	printf("press s to sunday");
	printf("\npress m to monday");
	printf("\npress t to tuesday");
	printf("\npress w to wednesday");
	printf("\npress T to thursday");
	printf("\npress f to friday");
	printf("\npress S to saturday");
	printf("\nenter your choice=");
	scanf("%c",&n);
	switch(n)
	{
	  case's':
		 printf("sunday");
		 break;
	  case'm':
		 printf("monday");
		 break;
	  case't':
		 printf("teusday");
		 break;
	  case'w':
		 printf("wednesday");
		 break;
	  case'T':
		 printf("thursday");
		 break;
	  case'f':
		 printf("friday");
		 break;
	  case'S':
		 printf("saturday");
		 break;
	 default :
		 printf("ple enter valid choice!");
	}


	getch();
}