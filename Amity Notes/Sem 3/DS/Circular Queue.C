#include <stdio.h>
int SIZE=5;
int items[5];
int front = -1, rear =-1;

int isFull()
{
		if( (front == rear + 1) || (front == 0 && rear == SIZE-1)) return 1;
		return 0;
}

int isEmpty()
{
		if(front == -1) return 1;
		return 0;
}
 void display();
void insert(int element)
{
		if(isFull()) printf("\n Queue is full!! \n");
		else
		{
				if(front == -1) front = 0;
				rear = (rear + 1) % SIZE;
				items[rear] = element;
				printf("\n Inserted -> %d", element);
				display();
		}
}


int delete()
{
		int element;
		if(isEmpty()) {
				printf("\n Queue is empty !! \n");
				return(-1);
		} else {
				element = items[front];
				if (front == rear){
						front = -1;
						rear = -1;
				} /* Q has only one element, so we reset the queue after dequeing it. ? */
				else {
						front = (front + 1) % SIZE;

				}
				printf("\n Deleted element -> %d \n", element);
				return(element);
		}
}




void display()
{
		int i;
		if(isEmpty()) printf(" \n Empty Queue\n");
		else
		{
				printf("\n Front -> %d ",front);
				printf("\n Items -> ");
				for( i = front; i!=rear; i=(i+1)%SIZE) {
						printf("%d ",items[i]);
				}
				printf("%d ",items[i]);
				printf("\n Rear -> %d \n",rear);
		}
}

int main()
{
 int x;
 int t=9;
 while(--t){
 clrscr();
 printf("1.Insert\n2.Delete\n3.Display\n\n Enter Choice ");
 scanf("%d",&x);

 switch(x){
			case 1: {
							 int a;
							 scanf("%d",&a);
							 insert(a);
							 break;
							}
			case 2:{delete();break;}
			case 3:{display();break;}
			case 4:{exit();}

}}
return 0;
}