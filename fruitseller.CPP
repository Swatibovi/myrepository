
#include<dos.h>
#include<time.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void displayMan(int x,int y)
{       setfillstyle(SOLID_FILL,14);
	circle(x,y,10);
	floodfill(x,y,15);
	setfillstyle(SOLID_FILL,6);
	circle(x-15,y,5);
	floodfill(x-15,y,15);		//face
	line(x,y+10,x,y+30); 		//neck
	line(x,y+30,x-20,y+40);    //left hand
	line(x,y+30,x+20,y+40);    //right hand
       setfillstyle(SOLID_FILL,5);
	line(x,y+30,x-10,y+70);
	line(x,y+30,x+10,y+70);
	line(x+10,y+70,x-10,y+70);
	floodfill(x,y+50,15);
	line(x-45,y+50,x-30,y+70);//basket
	line(x-5,y+50,x-20,y+70);
	line(x-20,y+70,x-30,y+70);
	line(x-45,y+50,x-5,y+50);
	arc(x-25,y+50,0,180,10);
	arc(x-25,y+50,0,180,5);



}
void displayManP(int x,int y)
{
       setfillstyle(SOLID_FILL,14);
	circle(x,y,10);
	floodfill(x,y,15);
	 setfillstyle(SOLID_FILL,6);
	circle(x-15,y,5);
	floodfill(x-15,y,15);			//face
	line(x,y+10,x,y+30); 		//neck
	line(x,y+30,x-20,y+40);    //left hand
	 setfillstyle(SOLID_FILL,5);
	line(x,y+30,x-10,y+70);
	line(x,y+30,x+10,y+70);
	line(x+10,y+70,x-10,y+70);
	floodfill(x,y+50,15);
	line(x,y+70,x,y+90);
	line(x-45,y+50,x-30,y+70);//basket
	line(x-5,y+50,x-20,y+70);
	line(x-20,y+70,x-30,y+70);
	line(x-45,y+50,x-5,y+50);
	arc(x-25,y+50,0,180,10);
	arc(x-25,y+50,0,180,5);
	setfillstyle(SOLID_FILL,4);
circle(x-20,y+60,5);
floodfill(x-20,y+60,15);
setfillstyle(SOLID_FILL,4);
circle(x-30,y+60,5);
floodfill(x-30,y+60,15);

}
void displaym(int x,int y)
{       setfillstyle(SOLID_FILL,14);
	circle(x,y,10);
	floodfill(x,y,15);	//face
	line(x,y+10,x,y+30); 		//neck
	line(x-5,y+30,x-20,y+40);    //left hand
	line(x+5,y+30,x+20,y+40);    //right hand
	setfillstyle(SOLID_FILL,1);
       line(x-5,y+30,x-5,y+70);
	line(x+5,y+30,x+5,y+70);
	 line(x-5,y+30,x+5,y+30);
	  line(x-5,y+70,x+5,y+70);
	  floodfill(x,y+50,15);
		line(x-5,y+70,x-20,y+90);
			line(x+5,y+70,x+20,y+90);

}

void displayt(int x, int y)
{
setfillstyle(SOLID_FILL,8);
line(x,y,x,y-40);
line(x,y-40,x+60,y-40);
line(x+60,y-40,x+60,y);
line(x,y,x+60,y);
floodfill(x+30,y-20,15);

setfillstyle(SOLID_FILL,4);
circle(x+5,y-45,5);
floodfill(x+5,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+15,y-45,5);
floodfill(x+15,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+25,y-45,5);
floodfill(x+25,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+35,y-45,5);
floodfill(x+35,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+45,y-45,5);
floodfill(x+45,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+55,y-45,5);
floodfill(x+55,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+10,y-55,5);
floodfill(x+10,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+20,y-55,5);
floodfill(x+20,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+30,y-55,5);
floodfill(x+30,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+40,y-55,5);
floodfill(x+40,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+50,y-55,5);
floodfill(x+50,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+15,y-65,5);
floodfill(x+15,y-65,15);
setfillstyle(SOLID_FILL,4);
circle(x+25,y-65,5);
floodfill(x+25,y-65,15);
setfillstyle(SOLID_FILL,4);
circle(x+35,y-65,5);
floodfill(x+35,y-65,15);
setfillstyle(SOLID_FILL,4);
circle(x+45,y-65,5);
floodfill(x+45,y-65,15);
}

void displayta(int x, int y)
{
setfillstyle(SOLID_FILL,8);
line(x,y,x,y-40);
line(x,y-40,x+60,y-40);
line(x+60,y-40,x+60,y);
line(x,y,x+60,y);
floodfill(x+30,y-20,15);

setfillstyle(SOLID_FILL,4);
circle(x+5,y-45,5);
floodfill(x+5,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+15,y-45,5);
floodfill(x+15,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+25,y-45,5);
floodfill(x+25,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+35,y-45,5);
floodfill(x+35,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+45,y-45,5);
floodfill(x+45,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+55,y-45,5);
floodfill(x+55,y-45,15);
setfillstyle(SOLID_FILL,4);
circle(x+10,y-55,5);
floodfill(x+10,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+20,y-55,5);
floodfill(x+20,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+30,y-55,5);
floodfill(x+30,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+40,y-55,5);
floodfill(x+40,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+50,y-55,5);
floodfill(x+50,y-55,15);
setfillstyle(SOLID_FILL,4);
circle(x+35,y-65,5);
floodfill(x+35,y-65,15);
setfillstyle(SOLID_FILL,4);
circle(x+45,y-65,5);
floodfill(x+45,y-65,15);
}
void scene()
{
	float x1=0.5,y1=0.5;
float m=0.5,n=0.5;



ellipse(200,30,60,240,10,15);
ellipse(225,20,345,165,20,15);
ellipse(262,27,340,160,20,15);
ellipse(268,42,230,50,20,10);
ellipse(226,46,163,340,31,15);
ellipse(300,21,20,182,21,19);
ellipse(325,31,290,100,21,15);
ellipse(299,45,228,20,33,11);


ellipse(40,30,60,240,10,15);
ellipse(65,20,345,165,20,15);
ellipse(105,27,340,160,20,15);
ellipse(109,42,2330,50,20,10);
ellipse(66,46,163,340,31,19);

ellipse(450,30,60,240,10,15);
ellipse(465,20,345,165,20,15);
ellipse(507,27,340,160,20,15);
ellipse(518,42,2330,50,20,10);
ellipse(476,46,163,340,31,15);




setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
//line(240*m,420*n,275*m,420*n);
line(240*m,420*n,245*m,405*n);
line(275*m,420*n,270*m,405*n);
line(245*m,405*n,240*m,405*n);
line(270*m,405*n,240*m,405*n);
line(240*m,405*n,275*m,405*n);
line(240*m,405*n,245*m,390*n);
line(275*m,405*n,270*m,390*n);
line(245*m,390*n,240*m,390*n);
line(270*m,390*n,275*m,390*n);
line(240*m,390*n,258*m,370*n);
line(275*m,390*n,257*m,370*n);
floodfill(259*m,375*n,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,BROWN);

line(250*m,460*n,250*m,410*n);
line(265*m,460*n,265*m,410*n);
line(250*m,460*n,265*m,460*n);
line(250*m,410*n,265*m,410*n);
floodfill(255*m,441*n,WHITE);


setcolor(WHITE);
setfillstyle(SOLID_FILL,15);
circle(90,90,20);
floodfill(85,75,WHITE);




setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
line(88*x1,400*y1,163*x1,400*y1);
line(100*x1,370*y1,88*x1,400*y1);
line(100*x1,370*y1,112*x1,400*y1);
line(100*x1,370*y1,150*x1,370*y1);
line(150*x1,370*y1,163*x1,400*y1);
floodfill(100*x1,375*y1,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,MAGENTA);
line(88*x1,400*y1,163*x1,400*y1);
line(100*x1,370*y1,112*x1,400*y1);
line(100*x1,370*y1,150*x1,370*y1);
line(150*x1,370*y1,163*x1,400*y1);
floodfill(105*x1,375*x1,WHITE);



setcolor(WHITE);
setfillstyle(SOLID_FILL,LIGHTRED);
line(112*x1,400*y1,112*x1,440*y1);
line(88*x1,440*y1,112*x1,440*y1);
line(88*x1,400*y1,88*x1,440*y1);
line(112*x1,440*y1,163*x1,440*y1);
floodfill(90*x1,402*y1,WHITE);


setcolor(WHITE);
setfillstyle(SOLID_FILL,GREEN);
line(163*x1,400*y1,163*x1,440*y1);
line(112*x1,440*y1,163*x1,440*y1);
line(112*x1,400*y1,112*x1,440*y1);
line(88*x1,400*y1,163*x1,400*y1);
floodfill(115*x1,405*y1,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,CYAN);
line(94*x1,440*y1,94*x1,420*y1);
line(106*x1,440*y1,106*x1,420*y1);
line(94*x1,420*y1,106*x1,420*y1);
floodfill(97*x1,435*y1,WHITE);



setcolor(BROWN);
line(0,322,700,322);

setcolor(WHITE);
//setfillstyle(SOLID_FILL,11);
line(0,300,13,298);
line(13,298,30,280);
line(30,280,80,280);
line(80,280,97,298);
line(97,298,120,300);
line(0,300,0,315);
line(0,315,25,315);
arc(35,315,0,180,9);
line(45,315,67,315);
arc(77,315,0,180,9);
line(85,315,120,315);
line(120,300,120,315);
//floodfill(1,301,15);


setcolor(WHITE);
setfillstyle(SOLID_FILL,BLACK);
line(32,285,50,285);
line(50,285,50,295);
line(50,295,23,295);
line(32,285,23,295);
floodfill(33,286,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,BLACK);
line(60,285,78,285);
line(60,285,60,295);
line(60,295,85,295);
line(78,285,85,295);
floodfill(61,286,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,BLACK);
circle(35,315,8);
floodfill(36,314,WHITE);

setcolor(WHITE);
setfillstyle(SOLID_FILL,BLACK);
circle(77,315,8);
floodfill(76,314,WHITE);

int x=500;

line(50+x,405,100+x,405);
line(75+x,375,125+x,375);
line(50+x,405,75+x,375);
line(100+x,405,125+x,375);
line(150+x,405,100+x,345);
line(75+x,375,75+x,370);
line(70+x,370,80+x,370);
line(80+x,345,100+x,345);

circle(150+x,405,25);
circle(50+x,405,25);



}
void bird(int i,int r)
{
int x1=400;
int y1=100;
int x2=440;
int y2=80;
int r1=15;
int r2=25;
r1=r1+r;
r2=r2+r;
arc(x1+i,y1+i,0,90,r1);
arc(x1+(2*r1)+i,y1+i,90,180,r1);
arc(x2+i,y2+i,0,90,r2);
arc(x2+(2*r2)+i,y2+i,90,180,r2);
}
void main()
{
	int gd=DETECT,p=0, gm,i,c=0,d=0,x=50,y=340,shouldMove=1;
	int rx,ry,j=0,r=0;
	initgraph(&gd,&gm,"..\\BGI\\");


	while(!kbhit()&& c<=34)
	{
		cleardevice();
		displaym(500,340);
		displayt(400,430);
		displayMan(x,340);
		scene();
		bird(j,r);
		line(0,430,639,430);

		if(shouldMove)
		{
			if(d<20)
				d+=4;
			else
				shouldMove=0;
			line(x,y+70,x-d,y+90);
			line(x,y+70,x+d,y+90);
		}
		else
		{
			if(d>0)
				d-=4;
			else
				shouldMove=1;
			line(x,y+70,x-d,y+90);
			line(x,y+70,x+d,y+90);

		}
		delay(200);
		x=(x+10)%639;
		c++;
		j=j+2;
		r=r+2;
	}
		while(!kbhit()&& p<=10)
	{
		cleardevice();
		displaym(500,340);
		displayta(400,430);
		displayManP(375,340);
		scene();
		//bird();
		line(0,430,639,430);

		if(shouldMove)
		{
			if(d<20)
				d+=4;
			else
				shouldMove=0;
			line(375,340+30,375+20-d,340+40+d);

								}


		else
		{
			if(d>0)
				d-=4;
			else
				shouldMove=1;
			line(375,340+30,375+20+d,340+40-d);

		}

		delay(200);
		x=(x+10)%639;
		p++;

	}

	getch();
	closegraph();

  }
