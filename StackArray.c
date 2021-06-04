#include<stdio.h>
#define MAX 5
int stack[MAX],item,i,top=-1;
void push();
void pop();
void display();

int main()
{
	int ch;
	do
	{
		printf("\n 1 for push");
		printf("\n 2 for pop");
		printf("\n 3 for display");
		printf("\n 4 for EXIT");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
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
				case 4:
            		exit(0);  
                	break;  
                	
				default:
				printf("sorry wrong choice\n");
				break;
				
		}
		printf("check");
	
	}
		while(ch<=4);
	return 0;
}
void push()
	{
		printf("enter your item\n");
		scanf("%d",&item);
			if(top==MAX-1)
			{
				printf("\noverflow");
			}
			else
			{
				top++;
				stack[top]=item;
				
			}
	}
	void pop()
	{
		if(top==-1)
		{
			printf("underflow\n");
		}
		else
		{
			item=stack[top];
			top--;
			printf("%d is deleted\n",item);
		}
		
	}
	void display()
	{
		if(top==-1)
		{
			printf("Underflow there is no item\n");
		}
		else
		{
			for(i=top;i>=0;i--)
			printf("%d ",stack[i]);
		}
		
	}
	
	
				
			
		

