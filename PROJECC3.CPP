#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
track()
{
	rectangle(0,0,639,475); //rectangle
	line(20,455,619,455);   //line1
	line(20,355,419,355);   //line2
	line(619,455,619,20);   //line3
	line(419,355,419,120);  //line4
	line(20,20,619,20);    //line5
	line(20,20,20,325);    //line7
	line(120,120,419,120);  //line6
	line(120,120,120,225);   //line8
	line(120,225,200,225);   //line9
	line(20,325,200,325);   //line10
	line(200,225,200,325); //line11
	return 0;
}
carshape1(int x,int y)
{
	int i,j;
	i=x;
	j=y;
	ellipse(40+i,420+j,140,219,25,40); //elps1 back
	ellipse(110+i,420+j,323,39,25,40);
	ellipse(95+i,420+j,330,32,20,35);
	ellipse(50+i,420+j,147,212,20,35);
	line(20+i,395+j,40+i,395+j);       //line 1 backupr
	line(40+i,395+j,50+i,400+j);       //line 2 backupr
	line(50+i,400+j,100+i,400+j);      //line 3 backupr
	line(100+i,400+j,110+i,395+j);
	line(110+i,395+j,129+i,395+j);
	line(20+i,445+j,40+i,445+j);
	line(40+i,445+j,50+i,440+j);
	line(50+i,440+j,100+i,440+j);
	line(100+i,440+j,110+i,445+j);
	line(110+i,445+j,129+i,445+j);
	return 0;
}
carshape2(int x,int y,int m,int n)
{
	int i,j,maxx,maxy;
	i=x;
	j=y;
	maxx=m;
	maxy=n;
		ellipse(maxx-54+i,maxy-58+j,230,310,40,25); //elps1 back
		ellipse(maxx-54+i,maxy-129+j,50,130,40,25); //elps2 front
		ellipse(maxx-54+i,maxy-68+j,240,300,40,25);
		ellipse(maxx-54+i,maxy-115+j,60,120,40,25);
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
		return 0;
	 }

void main()
{
	int gd=DETECT,gm,x=0,y=0,m,n;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	m=getmaxx();
	n=getmaxy();
	int rerun=9;
	while(rerun==9)
	{
	while(kbhit());
	int key=getch();
	if(key==97)
	{
	x-=20;
	}
		if(key==100)
	{
	x+=20;
      //	move=m+x;
	}
		if(key==119)
	{
	y-=20;
	}
		if(key==115)
	{
	y+=20;
	}
		if(key==27)
	{
	exit(0);
	}


		cleardevice();
		track();
		//carshape1(x,y);
		carshape2(x,y,m,n);

	 }
	getch();
	closegraph();
}