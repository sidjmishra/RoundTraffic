#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define max 20
void main()
{
    int gd=DETECT,gm;
    int j,i,bt[max],rt[max],rp,at[max],ttime=0,tq,flag=0,n;
    float wtime=0;
    clrscr();
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("\nEnter number of processes[max 4]:");
    scanf("%d",&n);
    rp=n;
    for(i=0;i<n;i++){
	at[i]=0;
    }
    for(i=0;i<n;i++){
	bt[i]=20;
	rt[i]=bt[i];
    }
    printf("Enter time quantum(Remember less the time quantum, more the time for execution[max 20]):");
    scanf("%d",&tq);
    //tq=10;
    for(i=0;rp!=0;)
    {
	/**
	    * this below condition check the remain time for any process is less than or equal with the time quantum
	    * or not and also check the remain time is greater than 0 or not. if both condition are true that means
	    * the process can execute fully at one time.
	*/
	if(i==0)
	{
		for(j=0;j<=420;j++)
		{
			setcolor(WHITE);
			line(0,180,260,180);
			line(0,240,260,240);
			line(0,300,260,300);
			line(380,180,640,180);
			line(380,240,640,240);
			line(380,300,640,300);
			line(260,0,260,180);
			line(320,0,320,180);
			line(380,0,380,180);
			line(260,300,260,480);
			line(320,300,320,480);
			line(380,300,380,480);
			// TODO
			rectangle(200,160,260,180);
			setfillstyle(1,10);
			fillellipse(215,170,8,8);
			setfillstyle(1,0);
			fillellipse(245,170,8,8);
			//
			rectangle(240,300,260,360);
			setfillstyle(1,4);
			fillellipse(250,315,8,8);
			setfillstyle(1,0);
			fillellipse(250,345,8,8);
			//
			rectangle(380,300,440,320);
			setfillstyle(1,4);
			fillellipse(395,310,8,8);
			setfillstyle(1,0);
			fillellipse(425,310,8,8);
			//
			rectangle(380,120,400,180);
			setfillstyle(1,0);
			fillellipse(390,135,8,8);
			setfillstyle(1,4);
			fillellipse(390,165,8,8);
			// TODO
			setcolor(RED);
			line(10+j,205,210+j,205);
			line(50+j,205,75+j,190);
			line(75+j,190,150+j,190);
			line(150+j,190,165+j,205);
			line(10+j,205,10+j,220);
			line(210+j,205,210+j,220);
			circle(65+j,220,10);
			circle(65+j,220,2);
			circle(145+j,220,10);
			circle(145+j,220,2);
			line(10+j,220,55+j,220);
			line(75+j,220,135+j,220);
			line(210+j,220,155+j,220);
			//
			setcolor(BLUE);
			line(550,265,375,265);
			line(510,265,495,250);
			line(495,250,420,250);
			line(420,250,405,265);
			line(550,265,550,280);
			line(375,265,375,280);
			circle(525,280,10);
			circle(525,280,2);
			circle(420,280,10);
			circle(420,280,2);
			line(550,280,535,280);
			line(515,280,430,280);
			line(410,280,375,280);
			//
			setcolor(GREEN);
			line(330,72,325,150);
			line(370,72,375,150);
			line(330,60,370,60);
			line(330,72,330,60);
			line(370,72,370,60);
			setcolor(WHITE);
			arc(325,150,270,360,7);
			arc(375,150,180,270,7);
			setcolor(GREEN);
			line(325,165,375,165);
			line(325,150,325,165);
			line(325,150,375,150);
			line(375,150,375,165);
			line(335,120,325,150);
			line(365,120,375,150);
			line(335,120,365,120);
			line(335,120,340,90);
			line(365,120,360,90);
			line(340,90,340,80);
			line(360,90,360,80);
			line(340,90,360,90);
			line(340,80,360,80);
			line(340,80,330,72);
			line(330,72,370,72);
			line(360,80,370,72);
			//
			setcolor(CYAN);
			line(265,315,270,415);
			line(315,315,310,415);
			line(265,315,315,315);
			line(270,410,310,410);
			line(270,400,310,400);
			line(270,410,270,425);
			line(310,410,310,425);
			line(270,425,310,425);
			setcolor(RED);
			line(270,415,275,415);
			line(275,415,275,410);
			line(310,415,305,415);
			line(305,415,305,410);
			setcolor(CYAN);
			line(265,315,270,340);
			line(315,315,310,340);
			line(270,340,310,340);
			line(270,340,275,360);
			line(310,340,305,360);
			line(275,360,305,360);
			line(275,360,275,380);
			line(305,360,305,380);
			line(275,380,305,380);
			line(275,380,270,400);
			line(305,380,310,400);
			delay(5);
			cleardevice();
		}
	}

	if(i==1)
	{
		for(j=0;j<=420;j++)
		{
			setcolor(WHITE);
			line(0,180,260,180);
			line(0,240,260,240);
			line(0,300,260,300);
			line(380,180,640,180);
			line(380,240,640,240);
			line(380,300,640,300);
			line(260,0,260,180);
			line(320,0,320,180);
			line(380,0,380,180);
			line(260,300,260,480);
			line(320,300,320,480);
			line(380,300,380,480);
			// TODO
			rectangle(200,160,260,180);
			setfillstyle(1,0);
			fillellipse(215,170,8,8);
			setfillstyle(1,4);
			fillellipse(245,170,8,8);
			//
			rectangle(240,300,260,360);
			setfillstyle(1,4);
			fillellipse(250,315,8,8);
			setfillstyle(1,0);
			fillellipse(250,345,8,8);
			//
			rectangle(380,300,440,320);
			setfillstyle(1,0);
			fillellipse(395,310,8,8);
			setfillstyle(1,10);
			fillellipse(425,310,8,8);
			//
			rectangle(380,120,400,180);
			setfillstyle(1,0);
			fillellipse(390,135,8,8);
			setfillstyle(1,4);
			fillellipse(390,165,8,8);
			// TODO
			setcolor(RED);
			line(10,205,210,205);
			line(50,205,75,190);
			line(75,190,150,190);
			line(150,190,165,205);
			line(10,205,10,220);
			line(210,205,210,220);
			circle(65,220,10);
			circle(65,220,2);
			circle(145,220,10);
			circle(145,220,2);
			line(10,220,55,220);
			line(75,220,135,220);
			line(210,220,155,220);
			//
			setcolor(BLUE);
			line(550-j,265,375-j,265);
			line(510-j,265,495-j,250);
			line(495-j,250,420-j,250);
			line(420-j,250,405-j,265);
			line(550-j,265,550-j,280);
			line(375-j,265,375-j,280);
			circle(525-j,280,10);
			circle(525-j,280,2);
			circle(420-j,280,10);
			circle(420-j,280,2);
			line(550-j,280,535-j,280);
			line(515-j,280,430-j,280);
			line(410-j,280,375-j,280);
			//
			setcolor(GREEN);
			line(330,72,325,150);
			line(370,72,375,150);
			line(330,60,370,60);
			line(330,72,330,60);
			line(370,72,370,60);
			setcolor(WHITE);
			arc(325,150,270,360,7);
			arc(375,150,180,270,7);
			setcolor(GREEN);
			line(325,165,375,165);
			line(325,150,325,165);
			line(325,150,375,150);
			line(375,150,375,165);
			line(335,120,325,150);
			line(365,120,375,150);
			line(335,120,365,120);
			line(335,120,340,90);
			line(365,120,360,90);
			line(340,90,340,80);
			line(360,90,360,80);
			line(340,90,360,90);
			line(340,80,360,80);
			line(340,80,330,72);
			line(330,72,370,72);
			line(360,80,370,72);
			//
			setcolor(CYAN);
			line(265,315,270,415);
			line(315,315,310,415);
			line(265,315,315,315);
			line(270,410,310,410);
			line(270,400,310,400);
			line(270,410,270,425);
			line(310,410,310,425);
			line(270,425,310,425);
			setcolor(RED);
			line(270,415,275,415);
			line(275,415,275,410);
			line(310,415,305,415);
			line(305,415,305,410);
			setcolor(CYAN);
			line(265,315,270,340);
			line(315,315,310,340);
			line(270,340,310,340);
			line(270,340,275,360);
			line(310,340,305,360);
			line(275,360,305,360);
			line(275,360,275,380);
			line(305,360,305,380);
			line(275,380,305,380);
			line(275,380,270,400);
			line(305,380,310,400);
			delay(5);
			cleardevice();
		}
	}

	if(i==2)
	{
		for(j=0;j<=420;j++)
		{
			setcolor(WHITE);
			line(0,180,260,180);
			line(0,240,260,240);
			line(0,300,260,300);
			line(380,180,640,180);
			line(380,240,640,240);
			line(380,300,640,300);
			line(260,0,260,180);
			line(320,0,320,180);
			line(380,0,380,180);
			line(260,300,260,480);
			line(320,300,320,480);
			line(380,300,380,480);
			// TODO
			rectangle(200,160,260,180);
			setfillstyle(1,0);
			fillellipse(215,170,8,8);
			setfillstyle(1,4);
			fillellipse(245,170,8,8);
			//
			rectangle(240,300,260,360);
			setfillstyle(1,4);
			fillellipse(250,315,8,8);
			setfillstyle(1,0);
			fillellipse(250,345,8,8);
			//
			rectangle(380,300,440,320);
			setfillstyle(1,4);
			fillellipse(395,310,8,8);
			setfillstyle(1,0);
			fillellipse(425,310,8,8);
			//
			rectangle(380,120,400,180);
			setfillstyle(1,10);
			fillellipse(390,135,8,8);
			setfillstyle(1,0);
			fillellipse(390,165,8,8);
			// TODO
			setcolor(RED);
			line(10,205,210,205);
			line(50,205,75,190);
			line(75,190,150,190);
			line(150,190,165,205);
			line(10,205,10,220);
			line(210,205,210,220);
			circle(65,220,10);
			circle(65,220,2);
			circle(145,220,10);
			circle(145,220,2);
			line(10,220,55,220);
			line(75,220,135,220);
			line(210,220,155,220);
			//
			setcolor(BLUE);
			line(550,265,375,265);
			line(510,265,495,250);
			line(495,250,420,250);
			line(420,250,405,265);
			line(550,265,550,280);
			line(375,265,374,280);
			circle(525,280,10);
			circle(525,280,2);
			circle(420,280,10);
			circle(420,280,2);
			line(550,280,535,280);
			line(515,280,430,280);
			line(410,280,375,280);
			//
			setcolor(GREEN);
			line(330,72+j,325,150+j);
			line(370,72+j,375,150+j);
			line(330,60+j,370,60+j);
			line(330,72+j,330,60+j);
			line(370,72+j,370,60+j);
			setcolor(WHITE);
			arc(325,150+j,270,360,7);
			arc(375,150+j,180,270,7);
			setcolor(GREEN);
			line(325,165+j,375,165+j);
			line(325,150+j,325,165+j);
			line(325,150+j,375,150+j);
			line(375,150+j,375,165+j);
			line(335,120+j,325,150+j);
			line(365,120+j,375,150+j);
			line(335,120+j,365,120+j);
			line(335,120+j,340,90+j);
			line(365,120+j,360,90+j);
			line(340,90+j,340,80+j);
			line(360,90+j,360,80+j);
			line(340,90+j,360,90+j);
			line(340,80+j,360,80+j);
			line(340,80+j,330,72+j);
			line(330,72+j,370,72+j);
			line(360,80+j,370,72+j);
			//
			setcolor(CYAN);
			line(265,315,270,415);
			line(315,315,310,415);
			line(265,315,315,315);
			line(270,410,310,410);
			line(270,400,310,400);
			line(270,410,270,425);
			line(310,410,310,425);
			line(270,425,310,425);
			setcolor(RED);
			line(270,415,275,415);
			line(275,415,275,410);
			line(310,415,305,415);
			line(305,415,305,410);
			setcolor(CYAN);
			line(265,315,270,340);
			line(315,315,310,340);
			line(270,340,310,340);
			line(270,340,275,360);
			line(310,340,305,360);
			line(275,360,305,360);
			line(275,360,275,380);
			line(305,360,305,380);
			line(275,380,305,380);
			line(275,380,270,400);
			line(305,380,310,400);
			delay(5);
			cleardevice();
		}
	}

	if(i==3)
	{
		for(j=0;j<=420;j++)
		{
			setcolor(WHITE);
			line(0,180,260,180);
			line(0,240,260,240);
			line(0,300,260,300);
			line(380,180,640,180);
			line(380,240,640,240);
			line(380,300,640,300);
			line(260,0,260,180);
			line(320,0,320,180);
			line(380,0,380,180);
			line(260,300,260,480);
			line(320,300,320,480);
			line(380,300,380,480);
			// TODO
			rectangle(200,160,260,180);
			setfillstyle(1,0);
			fillellipse(215,170,8,8);
			setfillstyle(1,4);
			fillellipse(245,170,8,8);
			//
			rectangle(240,300,260,360);
			setfillstyle(1,0);
			fillellipse(250,315,8,8);
			setfillstyle(1,10);
			fillellipse(250,345,8,8);
			//
			rectangle(380,300,440,320);
			setfillstyle(1,4);
			fillellipse(395,310,8,8);
			setfillstyle(1,0);
			fillellipse(425,310,8,8);
			//
			rectangle(380,120,400,180);
			setfillstyle(1,0);
			fillellipse(390,135,8,8);
			setfillstyle(1,4);
			fillellipse(390,165,8,8);
			// TODO
			setcolor(RED);
			line(10,205,210,205);
			line(50,205,75,190);
			line(75,190,150,190);
			line(150,190,165,205);
			line(10,205,10,220);
			line(210,205,210,220);
			circle(65,220,10);
			circle(65,220,2);
			circle(145,220,10);
			circle(145,220,2);
			line(10,220,55,220);
			line(75,220,135,220);
			line(210,220,155,220);
			//
			setcolor(BLUE);
			line(550,265,375,265);
			line(510,265,495,250);
			line(495,250,420,250);
			line(420,250,405,265);
			line(550,265,550,280);
			line(375,265,374,280);
			circle(525,280,10);
			circle(525,280,2);
			circle(420,280,10);
			circle(420,280,2);
			line(550,280,535,280);
			line(515,280,430,280);
			line(410,280,375,280);
			//
			setcolor(GREEN);
			line(330,72,325,150);
			line(370,72,375,150);
			line(330,60,370,60);
			line(330,72,330,60);
			line(370,72,370,60);
			setcolor(WHITE);
			arc(325,150,270,360,7);
			arc(375,150,180,270,7);
			setcolor(GREEN);
			line(325,165,375,165);
			line(325,150,325,165);
			line(325,150,375,150);
			line(375,150,375,165);
			line(335,120,325,150);
			line(365,120,375,150);
			line(335,120,365,120);
			line(335,120,340,90);
			line(365,120,360,90);
			line(340,90,340,80);
			line(360,90,360,80);
			line(340,90,360,90);
			line(340,80,360,80);
			line(340,80,330,72);
			line(330,72,370,72);
			line(360,80,370,72);
			//
			setcolor(CYAN);
			line(265,315-j,270,415-j);
			line(315,315-j,310,415-j);
			line(265,315-j,315,315-j);
			line(270,410-j,310,410-j);
			line(270,400-j,310,400-j);
			line(270,410-j,270,425-j);
			line(310,410-j,310,425-j);
			line(270,425-j,310,425-j);
			setcolor(RED);
			line(270,415-j,275,415-j);
			line(275,415-j,275,410-j);
			line(310,415-j,305,415-j);
			line(305,415-j,305,410-j);
			setcolor(CYAN);
			line(265,315-j,270,340-j);
			line(315,315-j,310,340-j);
			line(270,340-j,310,340-j);
			line(270,340-j,275,360-j);
			line(310,340-j,305,360-j);
			line(275,360-j,305,360-j);
			line(275,360-j,275,380-j);
			line(305,360-j,305,380-j);
			line(275,380-j,305,380-j);
			line(275,380-j,270,400-j);
			line(305,380-j,310,400-j);
			delay(5);
			cleardevice();
		}
	}

	if(rt[i]<=tq && rt[i]>0)
	{
	    ttime+=rt[i];
	    rt[i]=0;
	    flag=1;
	}

	else if(rt[i]>0)
	{
	    rt[i]-=tq;
	    ttime+=tq;
	}

	if(flag==1 && rt[i]==0)
	{
		//printf("P[%d] | waiting Time : %d\n",i+1,ttime-at[i]-bt[i]);
		wtime+=ttime-at[i]-bt[i];
		flag=0;
		rp--;
	}
	if(i==n-1)
	{
	    i=0;
	}
	else if(at[i+1]<=ttime)
	{
	    i++;
	}
	else
	{
	    i=0;
	}
    }

    wtime=(float)wtime/n;
    //printf("\nThe Average Waiting Time : %.2f \n",wtime);
    getch();
    closegraph();
}