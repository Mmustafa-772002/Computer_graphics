#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TurboC3\\BGI");

//glasses
circle(290,150,30);
circle(360,150,30);
arc(290,150,30,330,40);
arc(360,150,210,150,40);
arc(325,223,60,110,120);

//eye
circle(300,150,10);
circle(350,150,10);

//spects side supports
rectangle(250,140,245,160);
rectangle(400,140,405,160);
arc(285,172,139,166,50);
arc(365,171,12,35,50);
line(236,160,250,160);
line(400,160,415,160);

//body lines
line(236,160,236,250);
line(414,160,414,250);

//cloths
arc(235,329,45,90,80);
arc(235,342,50,90,80);
arc(416,329,90,133,80);
arc(416,342,90,130,80);

//hands
line(235,249,230,330);
line(230,330,285,310);
line(245,310,280,298);
line(250,290,250,308);
arc(300,300,165,220,20);
arc(352,300,330,2,20);

line(415,250,420,330);
line(420,330,370,310);
line(407,310,370,297);
line(403,290,403,309);

line(290,270,363,270);

//legs
arc(280,376,0,60,20);
arc(375,375,100,180,20);
arc(328,175,260,280,180);
line(328,350,328,372);
arc(345,347,235,290,30);
arc(310,347,250,310,30);
arc(295,383,350,20,30);
arc(361,384,155,190,30);
arc(295,337,260,300,60);
arc(362,338,240,279,60);
arc(295,388,60,220,12);
arc(355,390,328,120,15);

//legs
arc(315,283,210,252,80);
arc(336,283,295,330,80);

//gloves
arc(325,294,140,182,40);
arc(325,295,358,40,40);


//smile
arc(328,195,260,330,60);
arc(375,222,310,100,5);
arc(320,145,260,308,90);
arc(360,212,200,226,60);

//teeth
line(360,225,360,237);
line(345,232,345,242);
line(330,235,330,242);
line(315,235,315,242);
arc(338,224,248,305,20);
arc(351,220,252,300,20);
arc(320,224,252,300,20);
arc(307,224,275,300,20);
arc(360,218,275,314,20);
arc(288,295,100,180,8);
arc(364,298,0,90,8);
arc(285,282,270,25,30);
arc(365,280,160,280,30);
ellipse(265,305,270,350,20,30);
ellipse(390,305,190,265,20,30);
line(248,325,280,325);
line(375,325,405,325);

//color
setfillstyle(SOLID_FILL,15.);
floodfill(349,240,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(408,152,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(402,152,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(246,153,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(241,152,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(310,108,WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(310,181,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(310,155,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(380,155,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(380,266,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(280,270,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(300,291,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(360,290,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(375,250,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(325,240,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(365,235,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(355,235,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(335,235,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(310,240,WHITE);
setfillstyle(SOLID_FILL,9);
floodfill(319,280,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(275,290,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(375,290,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(275,316,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(275,305,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(375,306,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(375,315,WHITE);
setfillstyle(SOLID_FILL,0);
floodfill(360,380,WHITE);
setfillstyle(SOLID_FILL,0);
floodfill(300,380,WHITE);
setfillstyle(SOLID_FILL,1);
floodfill(35,250,WHITE);
getch();
}