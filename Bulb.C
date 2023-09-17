#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TurboC3\\BGI");

arc(300,230,310,230,80);
rectangle(250,310,350,360);
rectangle(0,0,639,479);
line(330,240,325,310);
line(270,240,275,310);
arc(388,308,150,182,40);
arc(212,308,358,30,40);
rectangle(350,350,355,360);
rectangle(250,350,245,360);
line(270,240,330,240);
setfillstyle(SOLID_FILL,14);
floodfill(300,200,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(300,20,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(320,260,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(331,350,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(351,351,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(247,354,WHITE);
outtextxy(285,370,"BULB");

getch();
}
