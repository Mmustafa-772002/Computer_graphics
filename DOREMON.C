#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT ,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
//head
arc(300,120,320,220,60);
arc(300,130,110,215,50);
arc(300,130,325,67,50);
//eye
circle(290,80,10);
circle(310,80,10);
circle(295,80,3);
circle(305,80,3);

//nose
circle(300,92,6);
line(300,99,300,140);
line(269,140,331,140);
arc(300,120,215,327,37);

//mustache
line(270,135,290,130);
line(270,120,290,120);
line(270,105,290,110);
line(310,131,330,135);
line(310,120,330,120);
line(310,108,330,105);

//bell

rectangle(345,167,255,160);
circle(300,175,8);

//pocket
circle(300,207,40);
line(275,215,325,215);
arc(300,200,212,330,30);

//body
line(245,200,255,280);
line(355,200,345,280);
line(300,260,300,280);

//legs
line(255,280,345,280);
arc(280,280,290,360,20);
line(269,300,285,300);
arc(320,280,180,250,20);
line(313,300,332,300);
arc(325,280,290,360,20);
arc(275,280,180,250,20);



//hands
arc(160,287,19,33,220);
arc(440,287,146,161,220);
circle(238,222,10);
circle(362,222,10);

getch();
}