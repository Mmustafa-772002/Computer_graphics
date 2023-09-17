#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");

//eye
arc(332,642,81,99,450);
line(260,130,260,200);
line(400,130,400,200);
arc(310,140,100,180,50);
arc(350,140,0,80,50);
arc(332,540,86,95,450);

line(255,195,250,130);
line(250,130,270,90);
line(270,110,270,90);
line(260,200,247,190);
line(247,190,247,140);
line(247,140,250,135);

line(405,195,410,130);
line(409,130,390,90);
line(390,110,390,90);
line(400,200,412,190);
line(413,190,413,140);
line(413,140,410,135);

arc(330,185,190,350,60);
arc(330,185,190,350,65);
line(326,260,290,285);
line(326,260,360,285);
arc(330,215,210,240,80);
arc(320,217,300,333,80);
line(260,254,300,245);
line(355,245,390,254);
line(240,265,260,254);
line(390,254,410,265);
arc(235,273,0,360,8);
arc(415,273,0,360,8);

line(226,273,210,390);
line(405,390,405,310);
line(255,390,255,310);
line(190,392,225,280);
line(423,274,460,338);
arc(450,342,330,40,10);
line(460,347,445,390);

arc(338,175,200,250,50);
arc(325,175,290,340,50);
arc(330,183,250,290,40);
arc(330,250,55,120,40);
arc(330,257,80,105,80);


arc(315,152,105,252,28);
arc(300,152,285,75,28);
arc(355,152,105,252,28);
arc(340,152,285,75,28);

arc(315,152,105,252,22);
arc(300,152,285,75,22);
arc(355,152,105,252,22);
arc(340,152,285,75,22);
line(352,245,360,245);
line(295,245,308,245);
line(382,251,398,257);
line(255,256,265,253);

circle(339,153,7);
circle(316,153,7);
line(190,390,445,390);
line(425,345,405,390);
outtextxy(20,20,"NAME:-NOUMAN ANWAR CHITAPURE");
outtextxy(20,40,"ROLL NO.:-10");
outtextxy(20,60,"PROJECT NAME:-PERMAN");

//COLOR
setfillstyle(SOLID_FILL,6);
floodfill(212,140,WHITE);
setfillstyle(SOLID_FILL,1);
floodfill(380,150,WHITE);
setfillstyle(SOLID_FILL,1);
floodfill(325,175,WHITE);
setfillstyle(SOLID_FILL,12);
floodfill(325,195,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(325,220,WHITE);
setfillstyle(SOLID_FILL,6);
floodfill(305,243,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(255,150,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(248,150,WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(290,150,WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(330,150,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(360,150,WHITE);
setfillstyle(SOLID_FILL,15);
floodfill(300,150,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(410,150,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(405,150,WHITE);
setfillstyle(SOLID_FILL,7);
floodfill(355,350,WHITE);
setfillstyle(SOLID_FILL,4);
floodfill(208,355,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(230,275,WHITE);
setfillstyle(SOLID_FILL,14);
floodfill(420,275,WHITE);
setfillstyle(SOLID_FILL,8);
floodfill(350,265,WHITE);

getch();
}