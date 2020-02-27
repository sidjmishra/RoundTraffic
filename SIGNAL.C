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
    n=2;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    /*
    printf("Enter the Number of Process(max 20) : ");
    scanf("%d",&n); // n is the number of Process
    */
    rp=n;

    //printf("Enter Arrival Time\n");
    for(i=0;i<n;i++){
	at[i]=0;
	/*
	printf("For P[%d]: ",i+1);
	scanf("%d",&at[i]);
	*/
    }

    //printf("\nEnter Burst Time\n");
    for(i=0;i<n;i++){
	bt[i]=20;
	/*
	printf("For P[%d]: ",i+1);
	scanf("%d",&bt[i]);
	*/
	rt[i]=bt[i]; // initially assume remain time for any process is equal to it's burst time !
    }

    tq=10;
    /*
    printf("\nEnter Time Quantum :");
    scanf("%d",&tq);
    printf("\n");
    */

    for(i=0;rp!=0;){
	/**
	    * this below condition check the remain time for any process is less than or equal with the time quantum
	    * or not and also check the remain time is greater than 0 or not. if both condition are true that means
	    * the process can execute fully at one time.
	*/

	if(i==0)
	{
		for(j=0;j<=420;j++)
		{
			setcolor(15);
			setfillstyle(1,0);
			fillellipse(263,125,10,10);
			setfillstyle(1,0);
			fillellipse(363,175,10,10);
			setfillstyle(1,4);
			fillellipse(363,125,10,10);
			setfillstyle(1,10);
			fillellipse(263,175,10,10);
			line(0,350,600,350);
			line(0,450,600,450);
			line(0,350,600,350);
			line(0,250,600,250);
			rectangle(250,100,276,200);
			rectangle(350,100,376,200);
			line(262,200,262,250);
			line(264,200,264,250);
			line(362,200,362,250);
			line(364,200,364,250);
			line(0,350,600,350);
			line(0,450,600,450);
			line(0,350,600,350);
			line(0,250,600,250);
			setcolor(RED);
			line(0+j,300,210+j,300);
			line(50+j,300,75+j,270);
			line(75+j,270,150+j,270);
			line(150+j,270,165+j,300);
			line(0+j,300,0+j,330);
			line(210+j,300,210+j,330);
			circle(65+j,330,15);
			circle(65+j,330,2);
			circle(145+j,330,15);
			circle(145+j,330,2);
			line(0+j,330,50+j,330);
			line(80+j,330,130+j,330);
			line(210+j,330,160+j,330);
			setcolor(BLUE);
			line(570,400,360,400);
			line(510,400,495,370);
			line(495,370,420,370);
			line(420,370,405,400);
			line(570,400,570,430);
			line(360,400,360,430);
			circle(525,430,15);
			circle(525,430,2);
			circle(420,430,15);
			circle(420,430,2);
			line(570,430,540,430);
			line(510,430,435,430);
			line(405,430,360,430);
			delay(10);
			cleardevice();
		}
	}
	if(i==1)
	{
		for(j=0;j<=420;j++)
		{
			setcolor(15);
			setfillstyle(1,4);
			fillellipse(263,125,10,10);
			setfillstyle(1,10);
			fillellipse(363,175,10,10);
			setfillstyle(1,0);
			fillellipse(363,125,10,10);
			setfillstyle(1,0);
			fillellipse(263,175,10,10);
			line(0,350,600,350);
			line(0,450,600,450);
			line(0,350,600,350);
			line(0,250,600,250);
			rectangle(250,100,276,200);
			rectangle(350,100,376,200);
			line(262,200,262,250);
			line(264,200,264,250);
			line(362,200,362,250);
			line(364,200,364,250);
			line(0,350,600,350);
			line(0,450,600,450);
			line(0,350,600,350);
			line(0,250,600,250);
			setcolor(RED);
			line(0,300,210,300);
			line(50,300,75,270);
			line(75,270,150,270);
			line(150,270,165,300);
			line(0,300,0,330);
			line(210,300,210,330);
			circle(65,330,15);
			circle(65,330,2);
			circle(145,330,15);
			circle(145,330,2);
			line(0,330,50,330);
			line(80,330,130,330);
			line(210,330,160,330);
			setcolor(BLUE);
			line(570-j,400,360-j,400);
			line(510-j,400,495-j,370);
			line(495-j,370,420-j,370);
			line(420-j,370,405-j,400);
			line(570-j,400,570-j,430);
			line(360-j,400,360-j,430);
			circle(525-j,430,15);
			circle(525-j,430,2);
			circle(420-j,430,15);
			circle(420-j,430,2);
			line(570-j,430,540-j,430);
			line(510-j,430,435-j,430);
			line(405-j,430,360-j,430);
			delay(10);
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