#include<stdio.h>
void push();
void pop();
void display();
int item,top=-1,a[30],i,size;
void main()
{
int ch;
printf("Enter limit:");
scanf("%d",&size);
while(ch!=4)
{
printf("1.Push 2.Pop 3.Display 4.Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4:break;
}
}
}
void push()
{
if(top==size-1)
{
printf("Stack overflow \n");
}
else
{
printf("Element to be pushed:");
scanf("%d",&item);
top++;
a[top]=item;
}
}
void pop()
{
if(top==-1)
{
printf("Stack underflow \n");
}
else
{
a[top]=item;
top--;
printf("Deleted element is %d \n",item);
}
}
void display()
{
printf("Stack is:");
for(i=top;i>=0;i--)
{
printf("%d \n",a[i]);
}
}
