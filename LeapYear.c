#include <stdio.h>
int leapYearCalc(int z);
int isDateRight(int a,int b, int c);
int main() {
int dd;
int mm;
int yy;
int dd1;
int mm1;
int yy1;
int dd2;
int mm2;
int yy2;
/*
printf("\nEnter a day:");
scanf("%d",&dd);
printf("\nEnter a month:");
scanf("%d",&mm);
printf("\nEnter a year:");
scanf("%d",&yy);
*/
dd=29;
mm=9;
yy=2000;
dd1=25;
mm1=4;
yy1=2001;
dd2=12;
mm2=10;
yy2=2022;
int i,x,y,z;
x=isDateRight(dd,mm,yy);
y=isDateRight(dd1,mm1,yy1);
z=isDateRight(dd2,mm2,yy2);
if (x==1||y==1||z==1)
{
	printf("Valid date");
	printf("It is a leap year but not a leap day");
    x=leapYearCalc(yy);
    if (x == 1) 
    {
        if (mm==2 && dd==29)
        {
            printf("\n%d is a leap day",dd);
        }
    }
    else
     printf("\n%d is a not leap year and hence there is no leap day",yy);
}
else 
{
    printf("Invalid date");
}
    return 0;
}
int leapYearCalc(int y)
{
    int flag;
    if ((y % 4 == 0) && ((y % 400 == 0) || (y%100 != 0)))
    {
      flag = 1;
    }
    else 
    {
      flag = 0;
    }
   return flag;
}
int isDateRight(int a,int b, int c)
{
	int flag;
 if(b==2)
 {
  if(a>=1 && a<=29)
  {
      flag = 1;
  }
  else
  {
      flag = 0;
  }
 }
 else if ((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))
 {
  if(a>=1 && a<=31)
  {
      flag = 1;
  }
  else
  {
      flag = 0;
  } 
 }
  else
 {
  if(a>=1 && a<=30)
  {
      flag = 1;
  }
  else
  {
      flag = 0;
  } 
 }
 return flag;
 }
