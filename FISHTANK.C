#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
line(200,450,450,450);
arc(270,263,125,250,200);
arc(350,276,300,61,200);
line(120,50,497,50);
line(120,50,155,100);
line(497,50,447,100);



circle(200,240,5);
circle(220,260,5);
circle(200,280,5);
circle(220,220,5);
circle(220,300,5);
circle(200,320,5);

arc(160,310,79,113,160);
arc(250,50,240,290,120);
arc(350,268,60,120,120);
arc(465,14,250,289,160);

arc(295,460,55,120,150);
arc(223,345,100,268,15);
arc(297,220,240,300,160);
circle(230,340,4);
arc(425,350,130,218,30);
arc(402,360,88,132,30);
arc(396,337,230,280,30);
arc(355,350,100,140,60);
arc(385,335,130,160,60);
arc(360,340,220,248,60);
arc(383,355,200,222,60);
arc(200,340,335,15,50);
arc(310,313,155,180,50);
arc(240,311,1,15,50);
arc(282,306,40,130,9);
arc(272,290,205,300,9);
arc(335,330,210,230,80);
arc(340,325,210,225,80);
line(265,370,270,366);
line(283,390,283,380);

setfillstyle(SOLID_FILL,6);
floodfill(120,120,WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(180,120,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(180,200,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(201,241,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(201,281,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(201,321,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(221,221,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(221,261,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(221,301,WHITE);
setfillstyle(SOLID_FILL,12);
floodfill(384,356,WHITE);
setfillstyle(SOLID_FILL,3);
floodfill(282,306,WHITE);
setfillstyle(SOLID_FILL,3);
floodfill(280,385,WHITE);
setfillstyle(SOLID_FILL,3);
floodfill(272,370,WHITE);
setfillstyle(SOLID_FILL,3);
floodfill(320,380,WHITE);
setfillstyle(SOLID_FILL,3);
floodfill(320,305,WHITE);





getch();
}