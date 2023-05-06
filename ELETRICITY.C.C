#include<stdio.h>
#include<conio.h>

main()
{
	int unit;
	float bill,total,sc;
	printf("unit charges =");
	scanf("%d",&unit);

	if(unit<=50)
	 {
	    bill=(unit*0.50);
	 }
	else if (unit<=150)
	 {
	    bill=(unit-50)*0.75+25;
	 }
	else if(unit<=250)
	 {
	    bill=(unit-150)*1.20+112.5;
	 }
	else
	 {
	    bill=(unit-250)*1.50+300;
	 }
       sc=bill*0.2;
       total=bill+sc;
       printf("ele bill is=%.2f",total);

	getch();
}
