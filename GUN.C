#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\Turboc3\\BGI");
for(i=0;i<650;i++)
{
cleardevice();
setbkcolor(4);
rectangle(0,0,639,479);
rectangle(150,270,250,300);
rectangle(120,270,150,350);
rectangle(150,300,170,320);
rectangle(150,300,174,324);
rectangle(158,300,162,313);
rectangle(150,270,250,290);
rectangle(130,270,120,260);

rectangle(160+i,270,180+i,280);
rectangle(190+i,270,210+i,280);
rectangle(220+i,270,240+i,280);

delay(10);
}
for(i=0;i<650;i++)
{

cleardevice();
setbkcolor(4);
rectangle(0,0,639,479);
rectangle(150,270,250,300);
rectangle(120,270,150,350);
rectangle(150,300,170,320);
rectangle(150,300,174,324);
rectangle(158,300,162,313);
rectangle(150,270,250,290);
rectangle(130,270,120,260);
rectangle(160+i,270,180+i,280);
rectangle(190+i,270,210+i,280);
rectangle(220+i,270,240+i,280);


delay(20);
}
getch();
}
