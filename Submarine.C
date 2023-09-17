#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
//window
circle(150,250,21);
circle(150,250,29);
circle(230,250,21);
circle(230,250,29);
circle(310,250,21);
circle(310,250,29);


// body
line(120,160,420,160);
line(120,340,420,340);
arc(120,250,90,270,90);
arc(230,250,140,220,140);
arc(350,550,49,80,395);
arc(350,-48,280,311,395);
line(420,160,420,340);

//telescope part
line(180,100,180,160);
line(340,100,340,160);
line(180,100,340,100);
line(220,50,255,50);
line(220,65,245,65);
line(260,55,260,100);
line(245,65,245,100);
arc(219,58,89,270,7);
arc(253,57,0,90,7);

//telescope windows
rectangle(195,115,220,140);
rectangle(225,115,270,140);
rectangle(275,115,320,140);

//fan
arc(750,260,140,210,140);
arc(500,163,320,360,140);
arc(488,319,357,30,140);
//window
setfillstyle(SOLID_FILL,9);
floodfill(151,252,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(232,252,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(312,252,WHITE);
//window bkcolor
setfillstyle(SOLID_FILL,YELLOW);
floodfill(160,230,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(235,275,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(312,275,WHITE);

//body
setfillstyle(SOLID_FILL,4);
floodfill(312,280,WHITE);

//tails
setfillstyle(SOLID_FILL,4);
floodfill(450,280,WHITE);

//head
setfillstyle(SOLID_FILL,4);
floodfill(90,280,WHITE);

//telescope
setfillstyle(SOLID_FILL,2);
floodfill(312,110,WHITE);



//telescopewindow
setfillstyle(SOLID_FILL,9);
floodfill(312,120,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(200,120,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(250,120,WHITE);

//water
setfillstyle(SOLID_FILL,9);
floodfill(20,30,WHITE);

//fan
setfillstyle(SOLID_FILL,8);
floodfill(620,230,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(620,300,WHITE);


getch();
}