#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int x,y,a;
clrscr();
gotoxy(35,2);
textcolor(GREEN);
cprintf("Processing bar:");
gotoxy(59,23);
textcolor(BLINK+GREEN);
cprintf("\ncoding By Adarsh singh");
gotoxy(1,3);
textcolor(BLINK+RED);
cprintf("instructions bottom:\n");
textcolor(GREEN);
gotoxy(1,4);
cprintf("1.for show the processing bar.");
gotoxy(1,5);
cprintf("0.for exit from program");
gotoxy(1,7);
textcolor(RED);
cprintf("enter bottom:-");
scanf("%d",&x);
switch(x)
{
case 1:
gotoxy(35,14);
textcolor(GREEN);
cprintf("process loading");
textcolor(BLINK+BLUE);
cprintf(". . .");
	for(y=35;y<=55;y++)
	{
	delay(100);
	gotoxy(y,15);
	textcolor(BLUE);
	cprintf("%c",220);
	printf("\b");
	if(y<=55)
	{
	delay(10);
	gotoxy(57,15);
	printf("%d%",(y-35)*5);
	printf("\b%");
	  }
	  }

	if(y==55)
	gotoxy(57,19);
	textcolor(YELLOW);
	cprintf(" processing sucess");
	sleep(5);
 case 0:
	exit(0);

   }
}

