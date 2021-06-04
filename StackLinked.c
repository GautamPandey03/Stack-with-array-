#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct stack
{
	int data;
	struct stack *next;
};
typedef struct stack NODE;
NODE *top=NULL,*ptr,*temp;
int data;
void main()
{
	int choice;
	do
	{
		printf("\n 1 for push\n");
		printf("\n 2 for pop\n");
		printf("\n 3 for display\n");
		printf("\nenter your choise\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
				case 2:
				pop();
				break;
				case 3:
				display();
				break;
				default:
				printf("sorry wrong choice");
				break;
		}
		
	}while(choice<4);
}

void push()
{
	ptr=(NODE *)malloc(sizeof(NODE));
	printf("enter your data\n");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	if(top==NULL)
	{
		top=ptr;
	}
	else
	{
		ptr->next=top;
		top=ptr;
	}
}
void display()
{
	temp=top;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
void pop()
{
	int del;
	if(top==NULL)
	{
		printf("\nempty your stack\n");
	}
	else
	{
		del=top->data;
		temp=top;
		top=top->next;
		free(temp);
		printf("\n %d is deleted",del);	
	}	
}
	

