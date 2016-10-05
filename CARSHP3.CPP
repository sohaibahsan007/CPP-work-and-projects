#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd=DETECT,gm,i=0,j=0,maxx,maxy;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	maxx=getmaxx();
	maxy=getmaxy();
		ellipse(maxx-100+i,maxy-100+j,200,280,40,50); //elps1 back
		ellipse(maxx-45+i,maxy-97+j,341,55,25,40); //elps2 front
		line(maxx-137+i,maxy-83+j,maxx-121+i,maxy-102+j);       //line 1 backupr
		line(maxx-127+i,maxy-65+j,maxx-92+i,maxy-69+j);       //line 2 backupr
		line(maxx-99+i,maxy-117+j,maxx-88+i,maxy-112+j);      //line 3 backupr
		line(maxx-82+i,maxy-80+j,maxx-50+i,maxy-86+j);
		line(maxx-88+i,maxy-113+j,maxx-55+i,maxy-118+j);
		line(maxx-92+i,maxy-69+j,maxx-82+i,maxy-80+j);
		line(maxx-50+i,maxy-86+j,maxx-38+i,maxy-80+j);
		line(maxx-54+i,maxy-119+j,maxx-45+i,maxy-126+j);
		line(maxx-45+i,maxy-126+j,maxx-31+i,maxy-130+j);
		line(maxx-38+i,maxy-80+j,maxx-24+i,maxy-83+j);

	getch();
	closegraph();
}