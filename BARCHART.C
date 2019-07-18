#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
int p,m,c,e,a,b;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
setbkcolor(BLUE);
printf("enter the four subject marks");
scanf("%d%d%d%d",&p,&m,&c,&e);
line(100,10,100,400);
line(100,400,500,400);
setfillstyle(2,4);
bar3d(105,400-p,140,400,10,1);
delay(1000);
setfillstyle(1,4);
bar3d(145,400-m,180,400,10,1);
delay(1000);
setfillstyle(1,GREEN);
bar3d(185,400-c,220,400,10,1);
delay(1000);
setfillstyle(5,6);
bar3d(225,400-e,260,400,10,1);
outtextxy(110,405,"PHY");
outtextxy(150,405,"MATH");
outtextxy(190,405,"CHE");
outtextxy(230,405,"ENG");
outtextxy(80,10,"400");
outtextxy(80,50,"350");
outtextxy(80,100,"300");
outtextxy(80,150,"250");
outtextxy(80,200,"200");
outtextxy(80,250,"150");
outtextxy(80,300,"100");
outtextxy(80,350,"50");
outtextxy(80,400,"0");

getch();
exit(0);
}