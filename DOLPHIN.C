#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");

//body
arc(250,330,0,61,250);
arc(430,170,90,133,80);
arc(390,184,70,120,100);
arc(270,304,70,90,220);
arc(259,164,80,150,80);
arc(190,205,80,114,80);
arc(200,62,238,280,80);
arc(208,145,300,60,5);

arc(170,80,270,300,80);
arc(210,90,238,270,80);
arc(535,435,70,150,80);
arc(545,395,135,180,80);
arc(500,410,40,90,80);
arc(300,410,20,77,200);
arc(200,150,40,320,100);
line(0,290,460,290);
line(496,290,650,290);
line(210,170,300,200);

arc(380,190,170,243,80);
arc(420,240,140,196,80);
arc(380,212,170,199,85);
arc(350,170,193,232,85);
circle(219,120,3);
circle(220,118,5);




//color
setfillstyle(SOLID_FILL,9);
floodfill(380,210,WHITE);

setfillstyle(SOLID_FILL,9);
floodfill(290,210,WHITE);

setfillstyle(SOLID_FILL,15);
floodfill(219,120,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(200,150,WHITE);

setfillstyle(SOLID_FILL,1);
floodfill(400,400,WHITE);

getch();

}