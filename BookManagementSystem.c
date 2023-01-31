#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct bookDetails
{
	int bid;
	char bname[100];
	char aname[100];
	struct bookDetails* next;
}*first=NULL,*last=NULL;


struct studentIssue
{
	int sbid;
	char sbname[100];
	char saname[100];
	struct	studentIssue* next;
}*sfirst=NULL,*slast=NULL;


void addBook();
void searchBook(struct bookDetails* first);
void display(struct bookDetails* first);
void issueBook(struct bookDetails* first,struct studentIssue *sfirst);


int main()
{	
	int ch;
	do
	{
		printf("\n-------- Book Management System --------");
		printf("\n1. Add");
		printf("\n2. Book Issue");
		printf("\n3. Search");
		printf("\n4. Display");
		printf("\nEnter choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				addBook();
			break;
			case 2:
				issueBook(first,sfirst);
			break;
			case 3:
				searchBook(first);
			break;
			case 4:
				printf("\nDisplaying books");
				display(first);
			break;
			/*default:
				printf("Invalid Option");
			break;*/
		}
	}while(ch!=5);
}
int id = 1;


void addBook()
{
	struct bookDetails* temp;
	temp=(struct bookDetails *)malloc(sizeof(struct bookDetails));
	printf("\nBook id :%d",id);
	temp->bid=id++;
	printf("\nEnter book name :");
	scanf("%s",temp->bname);
	printf("\nEnter book author :");
	scanf("%s",temp->aname);
	if(first==NULL)
	{
		first = last = temp;
	}
	else
	{
		last->next=temp;
		last=temp;
	}
}


void display(struct bookDetails *p)
{
	while(p!=NULL)
	{
		printf("\nBook id :%d",p->bid);
		printf("\nBook Name :%s",p->bname);
		printf("\nBook Author :%s",p->aname);
		p=p->next;
		//printf("\ngji");
	}
}


void searchBook(struct bookDetails *q)
{
	char authorname[100];
	printf("\nEnter author name of the book :");
	scanf("%s",authorname);
	while(q!=NULL)
	{
		if(strcmp((q->aname),authorname)==0)
		{
			printf("\nBook Found!!!");
		}
		q=q->next;
	}
	printf("\nNot found!!");
}


void issueBook(struct bookDetails *w, struct studentIssue *s)
{
	int id;
	display(w);
	int d;
	struct studentIssue *t; 
	t=(struct studentIssue*)malloc(sizeof(struct studentIssue));
	printf("Enter book id to be issued : ");
	scanf("%d",&d);
	printf("as");
	while(w!=NULL)
	{
		if((w->bid)==d)
		{
			t->sbid=w->bid;
			strcpy(t->sbname,w->bname);
	 		strcpy(t->saname,w->aname);
			break;
		}
		w=w->next;
	}
	t->next=NULL;
	if(sfirst==NULL)
	{
		sfirst=slast=t;
	}
	else
	{
		slast->next=t;
		slast=t;
	}
	while(s!=NULL)
	{
		printf("\nBook id :%d",s->sbid);
		printf("\nBook Name :%s",s->sbname);
		printf("\nBook Author :%s",s->saname);
		s=s->next;
	}
}
