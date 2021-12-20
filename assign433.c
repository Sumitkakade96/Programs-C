#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}

}
void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}
BOOL SearchNode(PPNODE Head,int no)
{
	BOOL icnt=1;
	if(*Head==NULL)
	{
		return FALSE;
	}
	
	while(*Head!=NULL)
	{
		if((*Head)->data==no)
		{
			return icnt;
		}
		*Head=(*Head)->next;
		icnt++;
	}
	return FALSE;
}
BOOL AdditionOfLL(PPNODE Head)
{
	BOOL isum=0;
	if(*Head==NULL)
	{
		return FALSE;
	}
	
	while(*Head!=NULL)
	{
		isum=isum+(*Head)->data;
		
		*Head=(*Head)->next;
		
	}
	return isum;
}
int main()
{
	PNODE first=NULL;
	BOOL iret=0;
	
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
	
	Display(first);
	
	iret=AdditionOfLL(&first);
	if(iret==FALSE)
	{
		printf("Linked List is empty\n");
	}
	else
	{
		printf("Addition of Linked List is: %d",iret);
	}
	
	
	
	return 0;
}