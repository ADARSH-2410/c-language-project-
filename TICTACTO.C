#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int x,y,a,b;
int m[10]={0,0,0,0,0,0,0,0,0,0},n[10]={0,0,0,0,0,0,0,0,0,0};
clrscr();
gotoxy(40,1);
textcolor(GREEN);
cprintf("Tic tac toe");
gotoxy(1,1);
printf("play 1\n if not 0");
scanf("%d",&a);
textbackground(WHITE);
for(a=1;a<=24;a++)
{                          //background color
for(b=1;b<=80;b++)
{
cprintf(" ");
}
}
textcolor(BLUE);
gotoxy(30,4);        //1st coloumn
cprintf("%c",179);
gotoxy(30,5);
cprintf("%c",197);
gotoxy(30,6);
cprintf("%c",179);
gotoxy(30,7);
cprintf("%c",197);
gotoxy(30,8);
cprintf("%c",179);
gotoxy(32,4);                   //2nd coloumn
cprintf("%c",179);
gotoxy(32,5);
cprintf("%c",197);
gotoxy(32,6);
cprintf("%c",179);
gotoxy(32,7);
cprintf("%c",197);
gotoxy(32,8);
cprintf("%c",179);
		       //row 1st
gotoxy(29,5);
cprintf("%c",196);
gotoxy(31,5);
cprintf("%c",196);
gotoxy(33,5);
cprintf("%c",196);
			//row 2nd
gotoxy(29,7);
cprintf("%c",196);
gotoxy(31,7);
cprintf("%c",196);
gotoxy(33,7);
cprintf("%c",196);
gotoxy(1,1);
printf("instructions:");
printf("\n* two player can play this game");
gotoxy(20,10);
		  //indexing
gotoxy(29,4);
printf("1");
gotoxy(31,4);
printf("2");
gotoxy(33,4);
printf("3");
gotoxy(29,6);
printf("4");
gotoxy(31,6);
printf("5");
gotoxy(33,6);
printf("6");
gotoxy(29,8);
printf("7");
gotoxy(31,8);
printf("8");
gotoxy(33,8);
printf("9");
for(a=1;a<=9;a++)
{
gotoxy(5,15);
textcolor(RED);
cprintf("\nenter by 1st player(only 0)");       //coding start
scanf("%d",&x);
switch(x)
{
	case 1:
	m[0]=1;
	textcolor(RED);
	gotoxy(29,4);
	cprintf("0");
       break;
	case 2:
	m[1]=2;
	textcolor(RED);
	gotoxy(31,4);
	cprintf("0");
       break;
       case 3:
       m[2]=3;
       textcolor(RED);
	gotoxy(33,4);
      cprintf("0");
       break;

	case 4:
	m[3]=4;
	textcolor(RED);
	gotoxy(29,6);
	cprintf("0");
       break;
	case 5:
	m[4]=5;
	textcolor(RED);
	gotoxy(31,6);
	cprintf("0");
       break;
       case 6:
       m[5]=6;
       textcolor(RED);
	gotoxy(33,6);
	cprintf("0");
       break;
       case 7:
       m[6]=7;
       textcolor(RED);
	gotoxy(29,8);
	cprintf("0");
       break;
	case 8:
	 m[7]=8;
	 textcolor(RED);
	gotoxy(31,8);
	cprintf("0");
       break;
       case 9:
       m[8]=9;
       textcolor(RED);
	gotoxy(33,8);
	cprintf("0");
       break;
	}
	if(m[0]&&m[1]&&m[2]||m[3]&&m[4]&&m[5]||m[6]&&m[7]&&m[8]||m[0]&&m[3]&&m[6]||
	m[1]&&m[4]&&m[7]||m[2]&&m[5]&&m[8]||m[0]&&m[4]&&m[8]||m[2]&&m[4]&&m[6])
	{
	textcolor(BLINK+GREEN);
	gotoxy(50,20);
	cprintf("1st palayer win");
	sleep(3);
	exit();
	}
 gotoxy(35,15);
 textcolor(YELLOW);
cprintf("\nenter by 2nd player(only 1)");       //coding start
scanf("%d",&y);

switch(y)
{
	case 1:
	n[0]=1;
	 textcolor(YELLOW);
	gotoxy(29,4);
	cprintf("1");
       break;
	case 2:
	n[1]=2;
	textcolor(YELLOW);
	gotoxy(31,4);
	cprintf("1");
       break;
       case 3:
       n[2]=3;
       textcolor(YELLOW);
	gotoxy(33,4);
	cprintf("1");
       break;

	case 4:
	n[3]=4;
	textcolor(YELLOW);
	gotoxy(29,6);
	cprintf("1");
       break;
	case 5:
	n[4]=5;
	textcolor(YELLOW);
	gotoxy(31,6);
	cprintf("1");
       break;
       case 6:
       n[5]=6;
       textcolor(YELLOW);
	gotoxy(33,6);
	cprintf("1");
       break;
       case 7:
       n[6]=7;
       textcolor(YELLOW);
	gotoxy(29,8);
	cprintf("1");
      break;
	case 8:
	n[7]=8;
	textcolor(YELLOW);
	gotoxy(31,8);
	cprintf("1");
      break;
       case 9:
       n[8]=9;
       textcolor(YELLOW);
	gotoxy(33,8);
	cprintf("1");
    break;
	}
	if(n[0]&&n[1]&&n[2]||n[3]&&n[4]&&n[5]||n[6]&&n[7]&&n[8]||n[0]&&n[3]&&n[6]||
	n[1]&&n[4]&&n[7]||n[2]&&n[5]&&n[8]||n[0]&&n[4]&&n[8]||n[2]&&n[4]&&n[6])
	{
	textcolor(BLINK+GREEN);
	gotoxy(50,20);
	cprintf("2nd palayer win");
	sleep(3);
	exit();
	}
	}
}
