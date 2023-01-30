import java.io.*;
import java.util.*;
import java.util.Date;
import java.text.SimpleDateFormat;

class DateDifference
{
    public static void main(String args[]) throws Exception
    {
        /*String d1;
        String d2;*/
        int dd1;
        int mm1;
        int yy1;
        int dd2;
        int mm2;
        int yy2;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        dateChecker dc = new dateChecker();
        while(true)
        {
            System.out.println("Enter start day : ");
            dd1=Integer.parseInt(br.readLine());
            System.out.println("Enter start month : ");
            mm1=Integer.parseInt(br.readLine());
            System.out.println("Enter start year : ");
            yy1=Integer.parseInt(br.readLine());
            int x = dc.isDateRight(dd1,mm1,yy1);
            if(x==1)
            {
                break;
            }    
            else
            {
                System.out.println("Enter valid Date!!!");
            }
        }
        while(true)
        {
            System.out.println("Enter end day : ");
            dd2=Integer.parseInt(br.readLine());
            System.out.println("Enter end month : ");
            mm2=Integer.parseInt(br.readLine());
            System.out.println("Enter end year : ");
            yy2=Integer.parseInt(br.readLine());
            int y = dc.isDateRight(dd1,mm1,yy1);
            if(y==1)
            {
                break;
            }    
            else
            {
                System.out.println("Enter valid Date!!!");
            }    
        }
        if(yy1>yy2)
        {
            System.out.println("Enter a date in which end year is greater than start year");
        }
        daysCalculator dcal = new daysCalculator();
        int startDays = dcal.sumDaysStartYear(dd1,mm1,yy1);
        int endDays = dcal.sumDaysEndYear(dd1,mm1,yy1,dd2,mm2,yy2);
        int daysBetweenYears = dcal.yearCount(yy1,yy2);
        int totalNoOfDays = (startDays+endDays+daysBetweenYears);
        if(yy1==yy2)
        {
            if(((yy1 % 4 == 0) && ((yy1 % 400 == 0) || (yy1%100 != 0))))
            {
                System.out.println("Total Number of days between "+dd1+"/"+mm1+"/"+yy1+" and "+dd2+"/"+mm2+"/"+yy2+" are "+(totalNoOfDays-366));
            }
            else
            {
                System.out.println("Total Number of days between "+dd1+"/"+mm1+"/"+yy1+" and "+dd2+"/"+mm2+"/"+yy2+" are "+(totalNoOfDays-365));
            }        
        }
        else
        {
            System.out.println("Total Number of days between "+dd1+"/"+mm1+"/"+yy1+" and "+dd2+"/"+mm2+"/"+yy2+" are "+totalNoOfDays);
        }
    }
}
class dateChecker
{
    public int isDateRight(int a,int b, int c)
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
}
class daysCalculator
{
    public int sumDaysStartYear(int a,int b, int c)
        {
	        int sum=0;
            int currentDay=a;
            int currentMonth=b;
            if ((c % 4 == 0) && ((c % 400 == 0) || (c%100 != 0)))
            {
                for(int i=currentMonth;i<=12;i++)
                {
                    if (i==2)
                    {
                        if(i==currentMonth)
                        {
                            sum = 29 - currentDay;
                        }
                        else
                        {
                            sum+=29;
                        }
                    }
                    else if ((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
                    {
                        if(i==currentMonth)
                        {
                            sum = 31 - currentDay;
                        }
                        else
                        {
                            sum+=31;
                        }       
                    }
                    else
                    {
                        if(i==currentMonth)
                        {
                            sum = 30 - currentDay;
                        }
                        else
                        {
                            sum+=30;
                        }
                    }
                }
            }
            else
            {
                for(int i=currentMonth;i<=12;i++)
                {
                    if(i==2)
                    {
                        if(i==currentMonth)
                        {
                            sum = 28 - currentDay;
                        }
                        else
                        {
                            sum+=28;
                        }
                    }
                    else if ((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
                    {
                        if(i==currentMonth)
                        {
                            sum = 31 - currentDay;
                        }
                        else
                        {
                            sum+=31;
                        }       
                    }
                    else
                    {
                        if(i==currentMonth)
                        {
                            sum = 30 - currentDay;
                        }
                        else
                        {
                            sum+=30;
                        } 
                    }
                }
            }
            return sum;
        }
    public int sumDaysEndYear(int a,int b, int c,int f, int g, int h)
    {
        int endYearDays = f;
        int sum=endYearDays;
        if ((h % 4 == 0) && ((h % 400 == 0) || (h%100 != 0)))
            {
                for(int i=1;i<g;i++)
                {
                    if (i==2)
                    {
                        sum += 29;
                    }
                    else if ((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
                    {
                        sum += 31;       
                    }
                    else
                    {
                            sum += 30;
                    }
                }
            }
            else
            {
                for(int i=1;i<g;i++)
                {
                    if(i==2)
                    {
                        sum+=28;
                    }
                    else if ((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
                    {
                        
                        sum+=31;       
                    }
                    else
                    {
                        sum+=30; 
                    }
                }
            }
            return sum;
    }
    public int yearCount(int o, int p)
    {
        int sum=0;
        for(int i=(o+1);i<p;i++)
        {
            if ((i % 4 == 0) && ((i % 400 == 0) || (i%100 != 0)))
            {
                sum+=366;
            }
            else
            {
                sum+=365;
            }
        }
        return sum;
    }
}   