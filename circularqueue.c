#include<stdio.h>
int n,queue[20],front=0,rear=0,count=0;
void enqueue (int x)
{
	if (count==n)
  	{
    		printf("Circular Queue is full!\n");
    		return;
  	}
  	queue[rear]=x;
  	rear=(rear+1)%n;
  	count++;
}
void dequeue ()
{
	if (count==0)
  	{
    		printf("Circular Queue is empty!\n");
    		return;
  	}
  	int x=queue[front];
  	front=(front+1)%n;
  	count--;
  	printf("Element Removed%d\n",x);
}
void display ()
{
  	if (count==0)
  	{
    		printf("Circular Queue is empty!\n");
    		return;
  	}
  	printf("Circular Queue elements:\n");
  	int i=front;
  	for(int j=0;j<count;j++)
  	{
    		printf("%d\t",queue[i]);
    		i=(i+1)%n;
  	}
  	printf("\n");
}
void main ()
{
  	printf("Enter the size of the Circular Queue:");
  	scanf("%d",&n);
  	int choice,x;
  	while (1)
  	{
    		printf("1.Enqueue 2.Dequeue 3.Display 4.Exit");
    		printf("\nEnter your choice:");
    		scanf("%d",&choice);
    		switch (choice)
    		{
      			case 1:
      	     		printf("Enter the enqueue element: ");
      	     		scanf("%d",&x);
      	     		enqueue (x);
      	     		break;
      			case 2:
      	     		dequeue ();
      	     		break;
      			case 3:
      	     		display ();
      	    		break;
      			case 4:
      	     		printf("Code executed successfully");
      	     		return;
     			default:
      	      		printf("Invalid Choice!\n");
		}
  	}
}
