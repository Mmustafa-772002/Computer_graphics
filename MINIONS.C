#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
//glass
circle(270,180,15);
circle(270,180,20);
circle(310,180,15);
circle(310,180,20);

//eye
circle(270,185,5);
circle(310,185,5);

//mouth
arc(290,208,210,330,35);
line(260,225,320,225);

//teeth
line(270,225,270,230);
line(280,225,280,230);
line(290,225,290,230);
line(300,225,300,230);
line(310,225,310,230);


arc(275,225,230,320,8);
arc(285,225,230,320,8);
arc(295,225,230,320,8);
arc(305,225,230,320,8);
arc(315,225,230,260,8);
arc(265,225,280,320,8);

//tongue
arc(295,251,45,140,15);
line(294,237,294,239);

//spects side supports
rectangle(235,175,250,185);
rectangle(330,175,345,185);

//head
arc(290,190,22,157,60);

//hair
arc(300,130,60,180,10);
arc(305,130,80,180,20);
arc(305,130,80,180,12);
arc(275,130,0,150,10);
arc(270,130,0,150,10);
arc(265,130,0,130,10);

//body
line(235,166,235,310);
line(345,165,345,310);
arc(247,310,180,270,12);
arc(332,310,270,360,12);
line(243,322,337,322);

//legs
rectangle(255,323,280,330);
rectangle(325,323,300,330);
arc(267,349,18,161,18);
arc(313,349,18,162,18);
line(249,344,285,344);
line(297,344,331,344);

//cloths
line(259,269,317,269);
line(235,230,260,270);
line(235,248,255,282);
line(344,230,316,270);
line(344,245,321,282);
line(255,280,255,308);
line(322,280,322,307);

arc(243,292,250,315,20);
arc(337,293,220,289,20);

arc(269,120,259,265,180);
arc(317,120,272,279,180);

//pocket
line(275,280,300,280);
line(275,280,275,295);
line(301,280,301,295);
line(289,305,301,295);
line(275,295,288,304);

//hand
line(236,230,222,314);
line(344,230,358,315);

//gloves
arc(237,276,244,270,40);
arc(350,276,260,288,40);

//gloves curve
arc(258,305,190,230,40);
arc(322,309,320,350,40);

arc(245,297,250,265,40);
arc(335,298,275,295,40);

arc(230,320,300,358,20);

arc(221,317,333,352,20);
arc(377,309,195,208,40);

arc(370,315,190,216,40);
//bk
setfillstyle(SOLID_FILL,6);
floodfill(30,20,WHITE);

//color face
setfillstyle(SOLID_FILL,14);
floodfill(320,220,WHITE);

setfillstyle(SOLID_FILL,14);
floodfill(320,140,WHITE);

setfillstyle(SOLID_FILL,9);
floodfill(300,300,WHITE);

setfillstyle(SOLID_FILL,8);
floodfill(320,168,WHITE);

setfillstyle(SOLID_FILL,8);
floodfill(280,168,WHITE);

setfillstyle(SOLID_FILL,15);
floodfill(272,228,WHITE);

setfillstyle(SOLID_FILL,15);
floodfill(282,228,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(292,228,WHITE);

setfillstyle(SOLID_FILL,15);
floodfill(302,228,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(312,228,WHITE);

setfillstyle(SOLID_FILL,15);
floodfill(268,228,WHITE);

getch();
}