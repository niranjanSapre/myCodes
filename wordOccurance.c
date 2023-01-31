#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c;
	char s;
	int count=0;
	FILE *fp;
	fp=fopen("Mahabharata.txt","r");
	if(fp==NULL)
	{
		printf("File not open");
	}
	else
	{
		for(c = getc(fp); c != EOF;c= getc(fp))
		{
			if(c=='a'||c=='A')
			{
				if(c!='\n')
				count++;
			}
		}
		printf("%d",(count));
	}
	fclose(fp);
	return 0;
}
