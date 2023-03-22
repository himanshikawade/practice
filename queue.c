#include<stdio.h>
int queue[100],choice,front,n,i,rear;
void enqueue(void);
void dequeue(void);
void display(void);
int main()
{
front=-1;
rear=-1;
printf("Enter the size of Employee:");
scanf("%d",&n);
printf("\n 1.Insertion\n");
printf("2.Deletion\n");
printf("3.Display\n");
printf("4.Exit\n");
do
{
printf("Enter the choice:");
scanf("%d/n",&choice);
switch(choice)
{
case 1:
enqueue();
break;
case 2:
     dequeue();
     break;
case 3:
    display();
break;
   case 4:
    printf("Exit point");
break;  
default:
printf("Please Enter valid choice 1/2/3/4/n");  

}
}
while(choice!=4);
return(0);
}
void enqueue()

{
int x;
if(rear>=(n-1))
{
printf("the queue is overflow");
}
else
{
if(front==-1)
{
front=0;
}
}
printf("Enter the employee ID:");
scanf("%d",&x);
rear=rear+1;
queue[rear]=x;
printf("the elements is inserted");

}
void dequeue()
{
if(front==-1 || front>rear)
{
printf("The queue is underflow");
}
else
{
front=front+1;
printf("Element is deleted\n");

}
}
void display()
{

if(front==-1)
{
printf("No elements will be displayed");
}
else
{
for(i=front;i<=rear;i++)
   {
printf("Elements are printed as :%d\n",queue[i]);

   }
}

}


