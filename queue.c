#include<stdio.h>
void enqueue();
void dequeue();
void display();
int A[50],front=-1,rear=-1,size,i;
int main()
{
	int choice=0;
	printf("Enter the size of queue: ");
	scanf("%d",&size);
	while(choice!=4)
	{
		printf("1. Enqueue \n2. Dequeue \n3. Display \n4. Exit \nEnter Operation :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: printf("Exited");
			break;
		}
	}
}
void enqueue()
{
	if(rear==size-1)
	{
		printf("Overflow Error\n");
	}
	else if(front==-1&&rear==-1)
	{
		rear++;
		front++;
		printf("Enter element to be inserted:");
		scanf("%d",&A[rear]);
	}
	else
	{
		rear++;
		printf("Enter element to be inserted:");
		scanf("%d",&A[rear]);
	}
}
void dequeue()
{
	if (front==-1&&rear==-1)
	{
		printf("Underflow error\n");
	}
	else 
	{
		printf("Deleted element is:%d\n",A[front]);
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}else front++;
	}
}
void display()
{
	if (front==-1&&rear==-1)
	{
		printf("Queue Empty \n");
	}
	else
	{
		printf("\nThe Queue is:");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",A[i]);
		}
		printf("\n");
	}
}
