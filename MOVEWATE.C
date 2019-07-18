#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,maxx,midy,a;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
maxx=getmaxx();
midy=getmaxy()/2;
setbkcolor(RED);
for(a=0;a<maxx-150;a=a+5)
{
cleardevice();
setcolor(BLUE);
settextstyle(5,0,9);
outtextxy(10,0,"water tank");

setcolor(WHITE);
line(0,midy+37,maxx,midy+37);
setcolor(BLUE);
rectangle(a,midy-100,a+100,midy+32); //rectangle
setcolor(WHITE);
line(a+100,midy-40,a+130,midy-40);         //water pipe
line(a+100,midy-60,a+150,midy-60);
line(a+150,midy-60,a+145,midy+10);
line(a+130,midy-40,a+135,midy+10);
delay(100);
 }
getch();
}


