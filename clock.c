#include<stdio.h>
void actualClock(int hh,int mm, int y);
int main()
{
	int h,m,x;
	printf("\nEnter hour : ");
	while(1)
	{
		scanf("%d",&h);
		if(h<=24 && h>0)
		{
			break;
		}
		else 
		{
			printf("\nEnter valid hour : ");
		}
	}
	printf("\nEnter minutes : ");
	while(1)
	{
		scanf("%d",&m);
		if(m<=60 && m>0)
		{
			break;
		}
		else 
		{
			printf("\nEnter valid minutes : ");
		}
	}
	printf("\nEnter the minutes at which the clock proceeds per hour : ");
	while(1)
	{
		scanf("%d",&x);
		if(x>=0)
		{
			break;
		}
		else 
		{
			printf("\nEnter valid input : ");
		}
	}
	actualClock(h,m,x);
	
}
void actualClock(int hh,int mm, int y)
{
	y=y*hh;
	mm=mm+y;
	while(mm>60)
	{
		hh=hh+1;
		mm=mm-60;
	}
	
	if(hh>24)
	{
		hh=0;
		printf("\nDay ends");
	}
	printf("\nActual time is %d hr %d minutes",hh,mm);
}
