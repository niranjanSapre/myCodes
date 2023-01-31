#include<stdio.h>
#include<string.h>
int chkOccurance(char str[]);
int main()
{
	char str[100];
	//printf("Enter string\n");
	//scanf("%s",str);
	chkOccurance("1234567890");
	printf("\ntest case successful");
	chkOccurance("1");
	printf("\ntest case successful");
	chkOccurance("7654");
	printf("\ntest case successful");
	chkOccurance("sdfghjkjhgfd");
	printf("\ntest case successful");
	chkOccurance("19876544567");
	printf("\ntest case successful");
	chkOccurance("11111111");
	printf("\ntest case successful");
	chkOccurance("8765445678");
	printf("\ntest case successful");
}
int chkOccurance(char str[])
{
	char x;
	int i,cnt1=0,cnt0=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0,cnt7=0,cnt8=0,cnt9=0;
	for (i=0;i<strlen(str);i++)
	{
		x=str[i];
		if(x=='0')
		{
			cnt0++;
		}
		else if(x=='1')
		{
			cnt1++;
		}
		else if(x=='2')
		{
			cnt2++;
		}
		else if(x=='3')
		{
			cnt3++;
		}
		else if(x=='4')
		{
			cnt4++;
		}
		else if(x=='5')
		{
			cnt1++;
		}
		else if(x=='6')
		{
			cnt6++;
		}
		else if(x=='7')
		{
			cnt7++;
		}
		else if(x=='8')
		{
			cnt8++;
		}
		else if(x=='9')
		{
			cnt9++;
		}
		else 
		{
			printf("Invalid input");
		}
	}
	printf("\n1 occured %d times",cnt1);
	printf("\n2 occured %d times",cnt2);
	printf("\n3 occured %d times",cnt3);
	printf("\n4 occured %d times",cnt4);
	printf("\n5 occured %d times",cnt5);
	printf("\n6 occured %d times",cnt6);
	printf("\n7 occured %d times",cnt7);
	printf("\n8 occured %d times",cnt8);
	printf("\n9 occured %d times",cnt9);
	printf("\n0 occured %d times",cnt0);
}
