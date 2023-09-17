#include<graphics.h>
#include<conio.h>
#include<stdio.h>
 
void main(){
 int gd = DETECT,gm;
	clrscr();
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    /* Draw Hut */
    setcolor(WHITE);
    rectangle(150,180,440,90);
    rectangle(150,180,250,300);
    rectangle(250,180,440,300);
    rectangle(270,230,320,300);
    rectangle(180,200,220,250);
    rectangle(410,200,370,250);
    line(340,180,340,300);


    outtextxy(250, 100, "ABC Hospital");
 
    /* Fill colours */
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(152, 182, WHITE);
    floodfill(252, 182, WHITE);
    floodfill(412, 182, WHITE);
    floodfill(152,172,WHITE);
    setcolor(BLACK);
    circle(290,145,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(292,140,BLACK);
    setcolor(RED);
    setlinestyle(0,0,3);
    line(290,115,290,175);
    line(260,145,320,145);
    setcolor(WHITE);
    /*
    setfillstyle(SLASH_FILL, BLUE);
    floodfill(182, 252, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(200, 105, WHITE);
    floodfill(210, 105, WHITE);  */
     
    getch();
    closegraph();
} 