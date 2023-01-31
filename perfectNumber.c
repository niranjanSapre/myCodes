#include<stdio.h>
int perfectNumber(int a);
int main()
{
	int n,i; 
	//printf("Enter number of elements");
	//scanf("%d",&n);
	int a;
	//printf("Enter elements");
	//for(i=0;i<n;i++)
	//{
	//	scanf("%d",&a[i]);		
	//}
	//for(i=0;i<sizeof(a);i++)
	//{
		perfectNumber(6);
		printf("\nTest case successful");
		perfectNumber(7);
		printf("\nTest case successful");
		perfectNumber(28);
		printf("\nTest case successful");
		perfectNumber(23);
		printf("\nTest case successful");
		perfectNumber(234235);
		printf("\nTest case successful");
		perfectNumber(2341);
		printf("\nTest case successful");
		perfectNumber(611);
		printf("\nTest case successful");
	//}
}
int perfectNumber(int a)
{
	int i,j,sum=0;
		for(j=1;j<a;j++)
		{
			if((a%j)==0)
			{
				sum=sum+j;
			}
		}
		if(sum==a)
		{
			printf("\n%d is a perfect number",a);
		}
		else
		{
			printf("\n%d Not a perfect number",a);
		}
 	
}
