#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int x,y,i;
int gd = DETECT,gm;

	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	x=300;
	y=350;
	for(i=60;i<300;i++)
	{
	if(i==299)
	{
	settextstyle(7,0,5);
	outtextxy(1,370,"press any key to exit:");
	}
		delay(10);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
getch();
}