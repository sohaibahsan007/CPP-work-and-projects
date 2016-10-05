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
	int rerun=9;
	while(rerun==9)
	{
	while(kbhit());
	int key=getch();
	if(key==97)
	{
	i-=20;
	}
		if(key==100)
	{
	i+=20;
	}
		if(key==119)
	{
	j-=20;
	}
		if(key==115)
	{
	j+=20;
	}
		if(key==27)
	{
	exit(0);
	}


		cleardevice();

		ellipse(maxx-54+i,maxy-58+j,230,310,40,25); //elps1 back
		ellipse(maxx-54+i,maxy-129+j,50,130,40,25); //elps2 front
		line(maxx-79+i,maxy-39+j,maxx-79+i,maxy-59+j);       //line 1 backupr
		line(maxx-79+i,maxy-59+j,maxx-74+i,maxy-69+j);       //line 2 backupr
		line(maxx-74+i,maxy-69+j,maxx-74+i,maxy-119+j);      //line 3 backupr
		line(maxx-74+i,maxy-119+j,maxx-79+i,maxy-129+j);
		line(maxx-79+i,maxy-129+j,maxx-79+i,maxy-149+j);
		line(maxx-29+i,maxy-39+j,maxx-29+i,maxy-59+j);
		line(maxx-29+i,maxy-59+j,maxx-34+i,maxy-69+j);
		line(maxx-34+i,maxy-69+j,maxx-34+i,maxy-119+j);
		line(maxx-34+i,maxy-119+j,maxx-29+i,maxy-129+j);
		line(maxx-29+i,maxy-129+j,maxx-29+i,maxy-149+j);

	 }
	getch();
	closegraph();
}