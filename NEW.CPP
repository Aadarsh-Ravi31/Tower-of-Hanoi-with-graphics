
#include<fstream.h>
#include<conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <dos.h>

struct hs
{
	char name[20];
	double time;
};






struct stack
{
	int a[10];

	int top;
};

struct disk
{
	int p;
	int q;
	int r;
	int s;
};
void traverse()
{       int ct=0;
	hs t;
	ifstream f("temp.dat");
	while(f.read((char*)&t,sizeof(hs))&&ct<3)
	{
		cout<<t.name<<" "<<t.time<<endl;
		ct++;

	}
	f.close();
}

int pop(int a[],int&top)
{
	int temp;
	if(top==-1)
	{

	return NULL;
	}
	else
	temp=a[top];

	top--;

	return temp;
}


void push(int a[],int&top,int x)
{
	top++;
	a[top]=x;
}

void tower()
{
	int ct=0;
	settextstyle(  TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(400,50,"ENTER 5 TO QUIT");
	settextstyle(  TRIPLEX_FONT,HORIZ_DIR,3);
	outtextxy(200,0,"TOWER OF HANOI");

	outtextxy(63,400,"TOWER 1");
	outtextxy(275,400,"TOWER 2");
	outtextxy(495,400,"TOWER 3");

	settextstyle(  TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(25,58,"MOVE DISK FROM:");
	outtextxy(25,122,"MOVE DISK TO:");

	hs p,q,r,s,k;
	clock_t start, end;
	start = clock();


	char m,n;

	stack x,y,z;

	x.a[0]=5;
	x.a[1]=4;
	x.a[2]=3;
	x.a[3]=2;
	x.a[4]=1;
	x.top=4;


	y.top=-1;


	z.top=-1;


	disk a,b,c,d,e;


	a.p=80;
	a.q=300;
	a.r=120;
	a.s=320;

	b.p=60;
	b.q=320;
	b.r=140;
	b.s=340;

	c.p=40;
	c.q=340;
	c.r=160;
	c.s=360;

	d.p=20;
	d.q=360;
	d.r=180;
	d.s=380;

	e.p=0;
	e.q=380;
	e.r=200;
	e.s=400;
	do

	{
	setfillstyle(1,BLACK);
	bar(200,50,250,200);


	setfillstyle(1,RED);
	bar(a.p,a.q,a.r,a.s);

	setfillstyle(1,YELLOW);
	bar(b.p,b.q,b.r,b.s);

	setfillstyle(1, MAGENTA);
	bar(c.p,c.q,c.r,c.s);

	setfillstyle(1,GREEN);
	bar(d.p,d.q,d.r,d.s);

	setfillstyle(1,BLUE);
	bar(e.p,e.q,e.r,e.s);
	setcolor(WHITE);
	gotoxy(30,5);


	cin>>m;
	gotoxy(30,9);

	cin>>n;

	if(m=='1'&&n=='2')
	{

		if(x.a[x.top]>y.a[y.top]&&y.top>-1||x.top==-1)
		{
		gotoxy(5,12);
		cout<<"INVALID MOVE";

		continue;
		}
		setfillstyle(1,BLACK);
		bar(0,150,150,200);

		int temp;
		temp=pop(x.a,x.top);
		push(y.a,y.top,temp);


		//inserting 1
		if(temp==1)
		{
		if(y.top==0)
			{
			a.p=300;
			a.q=380;
			a.r=340;
			a.s=400;

			}


		if(y.top==1)
			{
			a.p=300;
			a.q=360;
			a.r=340;
			a.s=380;
			}

		if(y.top==2)
			{
			a.p=300;
			a.q=340;
			a.r=340;
			a.s=360;
			}

		if(y.top==3)
			{
			a.p=300;
			a.q=320;
			a.r=340;
			a.s=340;
			}



		if(y.top==4)
			{
			a.p=300;
			a.q=300;
			a.r=340;
			a.s=320;
			}
		if(x.top==3)
			{
			setfillstyle(1,BLACK);
			bar(80,300,120,320);
			}
		if(x.top==2)
			{
			setfillstyle(1,BLACK);
			bar(80,320,120,340);
			}
		if(x.top==1)
			{
			setfillstyle(1,BLACK);
			bar(80,340,120,360);
			}
		if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(80,360,120,380);
			}
		if(x.top==-1)
			{

			setfillstyle(1,BLACK);
			bar(80,380,120,400);
			}

		}
		//insertin 2
		if(temp==2)
		{
		if(y.top==0)
			{
			b.p=280;
			b.q=380;
			b.r=360;
			b.s=400;
			}


		if(y.top==1)
			{
			b.p=280;
			b.q=360;
			b.r=360;
			b.s=380;
			}

		if(y.top==2)
			{
			b.p=280;
			b.q=340;
			b.r=360;
			b.s=360;
			}



		if(y.top==3)
			{
			b.p=280;
			b.q=320;
			b.r=360;
			b.s=340;
			}
		if(x.top==2)
			{
			setfillstyle(1,BLACK);
			bar(60,320,140,340);
			}
		 if(x.top==1)
			{
			setfillstyle(1,BLACK);
			bar(60,340,140,360);
			}
		 if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(60,360,140,380);
			}
		 if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(60,380,140,400);
			}
		 }



		//inserting 3
		if(temp==3)
		{
		if(y.top==0)
			{
			c.p=260;
			c.q=380;
			c.r=380;
			c.s=400;

			}

		if(y.top==1)
			{
			c.p=260;
			c.q=360;
			c.r=380;
			c.s=380;

			}

		if(y.top==2)
			{
			c.p=260;
			c.q=340;
			c.r=380;
			c.s=360;

			}
		if(x.top==1)
			{
			setfillstyle(1,BLACK);
			bar(40,340,160,360);
			}
		 if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(40,360,160,380);
			}
		 if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(40,380,160,400);
			}
		 }

		//inserting 4
		if(temp==4)
		{

		if(y.top==0)
		{
			d.p=240;
			d.q=380;
			d.r=400;
			d.s=400;

		}

		if(y.top==1)
			{
			d.p=240;
			d.q=360;
			d.r=400;
			d.s=380;

			}
		if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(20,360,180,380);
			 }
		 if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(20,380,180,400);
			}
		 }

		//inserting 5
		if(temp==5)
		{
		if(y.top==0)
			{
			d.p=220;
			d.q=380;
			d.r=420;
			d.s=400;

			}
		if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(0,380,200,400);
			}
		}
	}








	if(m=='1'&&n=='3')
	{
		if(x.a[x.top]>z.a[z.top]&&z.top>-1||x.top==-1)
		{
		gotoxy(5,12);
		cout<<"INVALID MOVE";

		continue;
		}
		setfillstyle(1,BLACK);
		bar(0,150,150,200);

		int temp;
		temp=pop(x.a,x.top);
		push(z.a,z.top,temp);


		//inserting 1
		if(temp==1)
		{
		if(z.top==0)
			{

			a.p=520;
			a.q=380;
			a.r=560;
			a.s=400;


			}

		if(z.top==1)
			{
			a.p=520;
			a.q=360;
			a.r=560;
			a.s=380;

		}

		if(z.top==2)
			{
			a.p=520;
			a.q=340;
			a.r=560;
			a.s=360;

			}

		if(z.top==3)
			{
			a.p=520;
			a.q=320;
			a.r=560;
			a.s=340;

			}

	       if(z.top==4)
			{
			a.p=520;
			a.q=300;
			a.r=560;
			a.s=320;
			}
	       if(x.top==3)
			{
			setfillstyle(1,BLACK);
			bar(80,300,120,320);
			}
		if(x.top==2)
			{
			setfillstyle(1,BLACK);
			bar(80,320,120,340);
			}
		if(x.top==1)
			{
			setfillstyle(1,BLACK);
			bar(80,340,120,360);
			}
		if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(80,360,120,380);
			}
		if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(80,380,120,400);
			}
		}

		//insertin 2
		if(temp==2)
		{
		if(z.top==0)
			{
			b.p=500;
			b.q=380;
			b.r=580;
			b.s=400;
			}



		if(z.top==1)
			{
			 b.p=500;
			 b.q=360;
			 b.r=580;
			 b.s=380;

			}

		if(z.top==2)
		{
			b.p=500;
			b.q=340;
			b.r=580;
			b.s=360;

			}

		if(z.top==3)
			{
			b.p=500;
			b.q=320;
			b.r=580;
			b.s=340;


			}
		if(x.top==2)
			{
			setfillstyle(1,BLACK);
			bar(60,320,140,340);
			}
		 if(x.top==1)
			{
			setfillstyle(1,BLACK);
			bar(60,340,140,360);
			}
		 if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(60,360,140,380);
			}
		 if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(60,380,140,400);
			}
		 }

		//inserting 3
		if(temp==3)
		{
		if(z.top==0)
			{
			c.p=480;
			c.q=380;
			c.r=600;
			c.s=400;

			}

		if(z.top==1)
			{
			c.p=480;
			c.q=360;
			c.r=600;
			c.s=380;

			}

		if(z.top==2)
			{
			c.p=480;
			c.q=340;
			c.r=600;
			c.s=360;

			}
		if(x.top==1)
			{
			setfillstyle(1,BLACK);
			bar(40,340,160,360);
			}
		 if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(40,360,160,380);
			}
		 if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(40,380,160,400);
			}
		 }

		//inserting 4
		if(temp==4)
		{
		if(z.top==0)
			{
			d.p=460;
			d.q=380;
			d.r=620;
			d.s=400;

			}

		if(z.top==1)
			{
			d.p=460;
			d.q=360;
			d.r=620;
			d.s=380;

			}
		if(x.top==0)
			{
			setfillstyle(1,BLACK);
			bar(20,360,180,380);
			}
		 if(x.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(20,380,180,400);
			}
		 }

		//inserting 5
		if(temp==5)
		{
		if(z.top==0)
			{
			e.p=440;
			e.q=380;
			e.r=640;
			e.s=400;



			setfillstyle(1,BLACK);
			bar(0,380,200,400);
			}
		}
	}

	if(m=='2'&&n=='1')
	{
		if(y.a[y.top]>x.a[x.top]&&x.top>-1||y.top==-1)
		{
		gotoxy(5,12);
		cout<<"INVALID MOVE";

		continue;
		}
		setfillstyle(1,BLACK);
		bar(0,150,150,200);
		int temp;
		temp=pop(y.a,y.top);
		push(x.a,x.top,temp);



		//inserting 1
		if(temp==1)
		{

		if(x.top==0)
			{
			a.p=80;
			a.q=380;
			a.r=120;
			a.s=400;


			}

		if(x.top==1)
			{
			a.p=80;
			a.q=360;
			a.r=120;
			a.s=380;

			}

		if(x.top==2)
			{
			a.p=80;
			a.q=340;
			a.r=120;
			a.s=360;

			}

		if(x.top==3)
			{
			a.p=80;
			a.q=320;
			a.r=120;
			a.s=340;


			}


		if(x.top==4)
			{

			a.p=80;
			a.q=300;
			a.r=120;
			a.s=320;

			}
		if(y.top==3)
			{
			setfillstyle(1,BLACK);
			bar(300,300,340,320);
			}
		if(y.top==2)
			{
			setfillstyle(1,BLACK);
			bar(280,320,360,340);
			}
		if(y.top==1)
			{
			setfillstyle(1,BLACK);
			bar(260,340,380,360);
			}
		if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(240,360,400,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(220,380,420,400);
			}
		}
		//insertin 2
		if(temp==2)
		{
		if(x.top==0)
			{
			b.p=60;
			b.q=380;
			b.r=140;
			b.s=400;

			}

		if(x.top==1)
			{
			b.p=60;
			b.q=360;
			b.r=140;
			b.s=380;

			}

		if(x.top==2)
			{
			b.p=60;
			b.q=340;
			b.r=140;
			b.s=360;

			}

		if(x.top==3)
			{
			b.p=60;
			b.q=320;
			b.r=140;
			b.s=340;

			}
		 if(y.top==2)
			{
			setfillstyle(1,BLACK);
			bar(280,320,360,340);
			}
		if(y.top==1)
			{
			setfillstyle(1,BLACK);
			bar(200,340,360,360);
			}
		if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(200,360,360,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(280,380,360,400);
			}
		}

		//inserting 3
		if(temp==3)
		{
		if(x.top==0)
			{

			c.p=40;
			c.q=380;
			c.r=160;
			c.s=400;

			}

		if(x.top==1)
			{
			c.p=40;
			c.q=360;
			c.r=160;
			c.s=380;

			}




		if(x.top==2)
			{
			c.p=40;
			c.q=340;
			c.r=160;
			c.s=360;


			}
		if(y.top==1)
			{
			setfillstyle(1,BLACK);
			bar(260,340,380,360);
			}
		if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(260,360,380,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(260,380,380,400);
			}
		}
		//inserting 4
		if(temp==4)
		{
		if(x.top==0)
		{
			d.p=20;
			d.q=380;
			d.r=180;
			d.s=400;

		}

		if(x.top==1)
			{
			d.p=20;
			d.q=360;
			d.r=180;
			d.s=380;

			}
		 if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(240,360,400,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(240,380,400,400);
			}
		}

		//inserting 5
		if(temp==5)
		{
		if(x.top==0)
			{

			e.p=0;
			e.q=380;
			e.r=200;
			e.s=400;



			setfillstyle(1,BLACK);
			bar(220,380,420,400);
			}
		}
	}

	if(m=='2'&&n=='3')
	{
		if(y.a[y.top]>z.a[z.top]&&z.top>-1||y.top==-1)
		{
		gotoxy(5,12);
		cout<<"INVALID MOVE";

		continue;
		}
		setfillstyle(1,BLACK);
		bar(0,150,150,200);

		int temp;
		temp=pop(y.a,y.top);
		push(z.a,z.top,temp);


		//inserting 1
		if(temp==1)
		{
		if(z.top==0)
			{
			a.p=520;
			a.q=380;
			a.r=560;
			a.s=400;

			}

		if(z.top==1)
			{
			a.p=520;
			a.q=360;
			a.r=560;
			a.s=380;

			}

		if(z.top==2)
			{
			a.p=520;
			a.q=340;
			a.r=560;
			a.s=360;

			}

		if(z.top==3)
			{
			a.p=520;
			a.q=320;
			a.r=560;
			a.s=340;

			}

		if(z.top==4)
			{
			a.p=520;
			a.q=300;
			a.r=560;
			a.s=320;

			}
		if(y.top==3)
			{
			setfillstyle(1,BLACK);
			bar(300,300,340,320);
			}
		if(y.top==2)
			{
			setfillstyle(1,BLACK);
			bar(280,320,360,340);
			}
		if(y.top==1)
			{
			setfillstyle(1,BLACK);
			bar(260,340,380,360);
			}
		if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(240,360,400,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(220,380,420,400);
			}
		}
		//insertin 2
		if(temp==2)
		{
		if(z.top==0)
			{
			b.p=500;
			b.q=380;
			b.r=580;
			b.s=400;

			}

		if(z.top==1)
			{
			b.p=500;
			b.q=360;
			b.r=580;
			b.s=380;

			}

		if(z.top==2)
			{
			b.p=500;
			b.q=340;
			b.r=580;
			b.s=360;

			}

		if(z.top==3)
			{
			b.p=500;
			b.q=320;
			b.r=580;
			b.s=340;

			}
		 if(y.top==2)
			{
			setfillstyle(1,BLACK);
			bar(280,320,360,340);
			}
		if(y.top==1)
			{
			setfillstyle(1,BLACK);
			bar(280,340,360,360);
			}
		if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(280,360,360,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(280,380,360,400);
			}
		}

		//inserting 3
		if(temp==3)
		{
		if(z.top==0)
			{
			c.p=480;
			c.q=380;
			c.r=600;
			c.s=400;

			}

		if(z.top==1)
			{
			c.p=480;
			c.q=360;
			c.r=600;
			c.s=380;

			}

		if(z.top==2)
			{
			c.p=480;
			c.q=340;
			c.r=600;
			c.s=360;

			}
		if(y.top==1)
			{
			setfillstyle(1,BLACK);
			bar(260,340,380,360);
			}
		if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(260,360,380,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(260,380,380,400);
			}
		}

		//inserting 4
		if(temp==4)
		{
		if(z.top==0)
			{
			d.p=460;
			d.q=380;
			d.r=620;
			d.s=400;

			}


		if(z.top==1)
			{
			d.p=460;
			d.q=360;
			d.r=620;
			d.s=380;

			}
		 if(y.top==0)
			{
			setfillstyle(1,BLACK);
			bar(240,360,400,380);
			}
		if(y.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(240,380,400,400);
			}
		}

		//inserting 5
		if(temp==5)
		{
		if(y.top==0)
			{
			e.p=440;
			e.q=380;
			e.r=640;
			e.s=400;



			setfillstyle(1,BLACK);
			bar(220,380,420,400);
			}
		}
	}

	if(m=='3'&&n=='1')
	{
		if(z.a[z.top]>x.a[x.top]&&x.top>-1||z.top==-1)
		{
		gotoxy(5,12);
		cout<<"INVALID MOVE";

		continue;
		}
		setfillstyle(1,BLACK);
		bar(0,150,150,200);
		int temp;
		temp=pop(z.a,z.top);
		push(x.a,x.top,temp);


		//inserting 1
		if(temp==1)
		{
		if(x.top==0)
			{
			a.p=80;
			a.q=380;
			a.r=120;
			a.s=400;


			}

		if(x.top==1)
			{
			a.p=80;
			a.q=360;
			a.r=120;
			a.s=380;

			}

		if(x.top==2)
			{
			a.p=80;
			a.q=340;
			a.r=120;
			a.s=360;

			}

		if(x.top==3)
			{
			a.p=80;
			a.q=320;
			a.r=120;
			a.s=340;

			}

		if(x.top==4)
			{
			a.p=80;
			a.q=300;
			a.r=120;
			a.s=320;

			}
		if(z.top==3)
			{
			setfillstyle(1,BLACK);
			bar(520,300,560,320);
			}
		if(z.top==2)
			{
			setfillstyle(1,BLACK);
			bar(520,320,560,340);
			}
		if(z.top==1)
			{
			setfillstyle(1,BLACK);
			bar(520,340,560,360);
			}
		if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(520,360,560,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(520,380,560,400);
			}
		}
		//insertin 2
		if(temp==2)
		{
		if(z.top==0)
			{
			b.p=60;
			b.q=380;
			b.r=140;
			b.s=400;

			}

		if(x.top==1)
			{
			b.p=60;
			b.q=360;
			b.r=140;
			b.s=380;

			}

		if(x.top==2)
			{
			b.p=60;
			b.q=340;
			b.r=140;
			b.s=360;

			}

		if(x.top==3)
			{
			b.p=60;
			b.q=320;
			b.r=140;
			b.s=340;

			}
		if(z.top==2)
			{
			setfillstyle(1,BLACK);
			bar(500,320,580,340);
			}
		if(z.top==1)
			{
			setfillstyle(1,BLACK);
			bar(500,340,580,360);
			}
		if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(500,360,580,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(500,380,580,400);
			}
		}

		//inserting 3
		if(temp==3)
		{
		if(x.top==0)
			{
			c.p=40;
			c.q=380;
			c.r=160;
			c.s=400;

			}

		if(x.top==1)
			{
			c.p=40;
			c.q=360;
			c.r=160;
			c.s=380;

			}

		if(x.top==2)
			{
			c.p=40;
			c.q=340;
			c.r=160;
			c.s=360;

			}
		if(z.top==1)
			{
			setfillstyle(1,BLACK);
			bar(480,340,600,360);
			}
		if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(480,360,600,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(480,380,600,400);
			}
		}

		//inserting 4
		if(temp==4)
		{
		if(x.top==0)
			{
			d.p=20;
			d.q=380;
			d.r=180;
			d.s=400;

			}

		if(x.top==1)
			{
			d.p=20;
			d.q=360;
			d.r=180;
			d.s=380;

			}
		if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(460,360,620,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(460,380,620,400);
			}
		}

		//inserting 5
		if(temp==5)
		{
		if(x.top==0)
			{
			e.p=0;
			e.q=380;
			e.r=200;
			e.s=400;




			setfillstyle(1,BLACK);
			bar(440,380,640,400);
			}
		}
	}

	if(m=='3'&&n=='2')
	{
		if(z.a[z.top]>y.a[y.top]&&y.top>-1||z.top==-1)
		{
		gotoxy(5,12);
		cout<<"INVALID MOVE";

		continue;
		}
		setfillstyle(1,BLACK);
		bar(0,150,150,200);
		int temp;
		temp=pop(z.a,z.top);
		push(y.a,y.top,temp);


		//inserting 1
		if(temp==1)
		{
		if(y.top==0)
			{
			a.p=300;
			a.q=380;
			a.r=340;
			a.s=400;

			}

		if(y.top==1)
			{
			a.p=300;
			a.q=360;
			a.r=340;
			a.s=380;

			}

		if(y.top==2)
			{
			a.p=300;
			a.q=340;
			a.r=340;
			a.s=360;

			}

		if(y.top==3)
			{
			a.p=300;
			a.q=320;
			a.r=340;
			a.s=340;

			}

		if(y.top==4)
			{
			a.p=300;
			a.q=300;
			a.r=340;
			a.s=320;

			}
		if(z.top==3)
			{
			setfillstyle(1,BLACK);
			bar(520,300,560,320);
			}
		if(z.top==2)
			{
			setfillstyle(1,BLACK);
			bar(520,320,560,340);
			}
		if(z.top==1)
			{
			setfillstyle(1,BLACK);
			bar(520,340,560,360);
			}
		if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(520,360,560,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(520,380,560,400);
			}
		}
		//insertin 2
		if(temp==2)
		{
		if(y.top==0)
			{
			b.p=280;
			b.q=380;
			b.r=360;
			b.s=400;

			}

		if(y.top==1)
			{
			b.p=280;
			b.q=360;
			b.r=360;
			b.s=380;

			}

		if(y.top==2)
			{
			b.p=280;
			b.q=340;
			b.r=360;
			b.s=360;

			}

		if(y.top==3)
			{
			b.p=280;
			b.q=320;
			b.r=360;
			b.s=340;

			}
		if(z.top==2)
			{
			setfillstyle(1,BLACK);
			bar(500,320,580,340);
			}
		if(z.top==1)
			{
			setfillstyle(1,BLACK);
			bar(500,340,580,360);
			}
		if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(500,360,580,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(500,380,580,400);
			}
		}

		//inserting 3
		if(temp==3)
		{
		if(y.top==0)
			{
			c.p=260;
			c.q=380;
			c.r=380;
			c.s=400;

			}

		if(y.top==1)
			{
			c.p=260;
			c.q=360;
			c.r=380;
			c.s=380;

			}

		if(y.top==2)
			{
			c.p=260;
			c.q=340;
			c.r=380;
			c.s=360;

			}
		if(z.top==1)
			{
			setfillstyle(1,BLACK);
			bar(480,340,600,360);
			}
		if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(480,360,600,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(480,380,600,400);
			}
		}

		//inserting 4
		if(temp==4)
		{
		if(y.top==0)
			{
			d.p=240;
			d.q=380;
			d.r=400;
			d.s=400;

			}

		if(y.top==1)
			{
			d.p=240;
			d.q=360;
			d.r=400;
			d.s=380;

			}
		 if(z.top==0)
			{
			setfillstyle(1,BLACK);
			bar(460,360,620,380);
			}
		if(z.top==-1)
			{
			setfillstyle(1,BLACK);
			bar(460,380,620,400);
			}
		}

		//inserting 5
		if(temp==5)
		{
		if(y.top==0)
			{
			e.p=220;
			e.q=380;
			e.r=420;
			e.s=400;



			setfillstyle(1,BLACK);
			bar(440,380,640,400);
			}
		}
	}
	if(x.top==-1&&y.top==-1)

	{

		settextstyle(  TRIPLEX_FONT,HORIZ_DIR,2);
		outtextxy(25,200,"YOU HAVE SUCCESFULLY COMPLETED TOWER OF HANOI ");


		setfillstyle(1,RED);
		bar(520,300,560,320);
		end=clock();
		p.time=(end - start) / CLK_TCK;
		gotoxy(5,10);
		cout<<"time:"<<p.time;
		cout<<"enter name";
		cin>>p.name;

		ifstream f1("temp.dat");
		ofstream f2("binary5.dat");
		while(f1.read((char*)&k,sizeof(k)))
		{
			if(k.time>p.time&&ct==0)
			{
				f2.write((char*)&p,sizeof(p));
				f2.write((char*)&k,sizeof(k));
				ct++;

			}


			else
			{
				f2.write((char*)&k,sizeof(k));
			}

		}
		f1.close();
		f2.close();
		remove("temp.dat");
		rename("binary5.dat","temp.dat");
		break;

	}



















	}while(m!='5'||n!='5');
}


void main()
{

	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "..\\bgi");

	int o;
	do
	{
	cout<<"1.START GAME"<<endl<<"2.HIGH SCORE"<<endl<<"3.EXIT"<<endl;
	cin>>o;
	if(o==1)
	{
	cleardevice();
	tower();
	cleardevice();
	}

	if(o==2)
	{
	cleardevice();
	traverse();
	getch();
	cleardevice();
	}


	}while(o!=3);

	getch();
	closegraph();
}





