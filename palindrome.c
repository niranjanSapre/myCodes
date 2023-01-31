#include<stdio.h>
#include<string.h>
void chkPalindrome(char str1[]);
int main()
{
	char str1[100];
	int n,i; 
	//printf("Enter string\n");
	//scanf("%s",str1);		
	int p;
	chkPalindrome("mom");
	printf("\nTest case succesful for mom");
	chkPalindrome("101");
	printf("\nTest case succesful for 101");
	chkPalindrome("malayalam");
	printf("\nTest case succesful for malayalam");
	chkPalindrome("asd");
	printf("\nTest case succesful for asd");
	chkPalindrome("a");
	printf("\nTest case succesful for a");
	/*if(p==1)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}*/
}

void chkPalindrome(char str1[])
{
	int x,i,j;
	x = strlen(str1);
	char str2[x];
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot a palindorme");
	}
}
