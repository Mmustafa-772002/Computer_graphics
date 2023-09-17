#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
for(i=0;i<450;i++)
{
cleardevice();
circle(600-i,380,20);
circle(480-i,380,20);
line(500-i,380,580-i,380);
line(505-i,373,575-i,373);
arc(480-i,378,10,186,25);
arc(600-i,378,358,170,25);
line(455-i,380,460-i,380);
line(620-i,380,625-i,380);
line(480-i,352,490-i,285);
line(487-i,353,497-i,285);
rectangle(489-i,275,498-i,285);
circle(480-i,380,12);
circle(600-i,380,12);
rectangle(0,0,639,479);
line(0,400,639,400);
ellipse(180+i,100,360,0,80,20);
ellipse(350+i,140,0,360,40,15);

ellipse(522-i,308,152,270,20,50);
ellipse(560-i,308,280,60,20,50);
ellipse(538-i,255,222,330,40,20);
ellipse(540-i,340,270,320,40,20);
line(535-i,373,540-i,360);
line(522-i,358,526-i,373);
line(560-i,374,564-i,357);

line(498-i,285,504-i,292);
line(548-i,360,552-i,374);
ellipse(503-i,275,50,220,20,5);
arc(575-i,350,200,120,5);
ellipse(545-i,228,300,46,50,45);
ellipse(550-i,252,160,230,60,25);
circle(502-i,235,4);
ellipse(530-i,275,90,160,40,85);
ellipse(545-i,208,10,130,42,20);
ellipse(565-i,193,0,160,10,15);
ellipse(555-i,193,55,160,10,15);
line(0,430,639,430);
circle(50,50,40);
delay(20);
}

getch();
}