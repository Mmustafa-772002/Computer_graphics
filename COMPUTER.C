#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
//table
rectangle(50,400,600,415);
rectangle(400,415,550,500);
rectangle(80,415,100,500);
circle(470,440,10);

//lamp
rectangle(500,390,580,400);
line(500,200,600,300);
line(500,220,580,300);
rectangle(500,190,450,230);
line(581,300,530,390);
line(591,312,545,390);
circle(590,303,10);
arc(475,227,190,350,15);

//wifi
rectangle(460,390,490,400);
rectangle(460,340,490,400);
rectangle(494,310,490,380);
line(465,350,465,350);
line(465,355,465,355);
line(465,360,465,360);
line(465,365,465,365);

//cup
rectangle(390,350,430,400);
arc(430,372,270,90,10);
arc(430,372,270,90,14);

//pc
rectangle(260,395,345,400);
rectangle(230,350,370,250);
rectangle(225,365,375,245);
line(315,395,320,365);
line(285,395,280,365);

//books
rectangle(180,300,200,400);
rectangle(160,310,180,400);
rectangle(140,300,160,400);

//clock
circle(150,130,40);
circle(150,130,45);
circle(150,130,2);
line(150,130,180,140);
line(150,130,150,110);
line(180,315,200,315);
line(180,320,200,320);
line(180,325,200,325);
line(180,330,200,330);



//color
setfillstyle(SOLID_FILL,1);
floodfill(220,220,WHITE);
setfillstyle(SOLID_FILL,1);
floodfill(436,370,WHITE);

setfillstyle(SOLID_FILL,1);
floodfill(220,420,WHITE);

setfillstyle(SOLID_FILL,4);
floodfill(462,392,WHITE);

setfillstyle(SOLID_FILL,4);
floodfill(462,342,WHITE);

setfillstyle(SOLID_FILL,15);
floodfill(392,355,WHITE);

setfillstyle(SOLID_FILL,15);
floodfill(442,370,WHITE);

setfillstyle(SOLID_FILL,13);
floodfill(181,332,WHITE);

setfillstyle(SOLID_FILL,13);
floodfill(181,311,WHITE);

setfillstyle(SOLID_FILL,6);
floodfill(171,311,WHITE);

setfillstyle(SOLID_FILL,12);
floodfill(155,311,WHITE);

setfillstyle(SOLID_FILL,8);
floodfill(493,370,WHITE);

setfillstyle(SOLID_FILL,14);
floodfill(480,236,WHITE);

setfillstyle(SOLID_FILL,8);
floodfill(480,220,WHITE);


setfillstyle(SOLID_FILL,8);
floodfill(506,220,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(545,386,WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(545,395,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(545,405,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(545,440,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(85,430,WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(250,330,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(198,318,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(198,323,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(198,328,WHITE);
setfillstyle(SOLID_FILL,0);
floodfill(140,148,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(111,148,WHITE);
getch();
}