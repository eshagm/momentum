#include<stdio.h>
#include<conio.h>

void main()
{

	clrscr();
	char cha;
	printf("enter the character=");
	scanf("%c",&cha);
	if((cha>='a'&& cha<='z')||(cha>='A'&& cha<='Z'))
	  {
	     printf("the character is alphabet");
	  }
	else if(cha>='0'&& cha<='9')
	  {
	     printf("the character is digit");
	  }
	else
	 {
	    printf("the character is sp.character");
	 }

	getch();
}                  