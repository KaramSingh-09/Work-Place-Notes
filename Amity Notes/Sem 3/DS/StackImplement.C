#include<stdio.h>
#define max_stk 100
int top = -1;
int array[max_stk];

void push(){
	if(top==(max_stk-1)){
		printf("Overflow!\n");
		return;
	}
	top++;
	printf("Enter the elemnt you want to insert: ");
	scanf("%d",&array[top]);
}

void peek(){
	printf("\nElement at the top of the stack: %d",array[top]);
}
void pop(){
	if(top==-1){
		printf("Underflow!\n");
		return;
	}
	top--;
}

void display(){
	int i;
	printf("\nStack: ");
	for( i = 0;i<=top;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}

void seek(){
	int i,item,index=-1;
	printf("\nEnter the element you want to search for: ");
	scanf("%d",&item);

	for(i=0;i<=top;i++){
		if(item == array[i]){
			index = i;
		}
	}
	if(index!=-1){
		printf("\nThe element has been found and the index is %d",index);
	}else{
		printf("\nThe element is not present in the stack");
	}
}
void change(){
	printf("\nEnter the new element: ");
	scanf("%d",&array[top]);
}
int main(){

	int choice;
	int flag = 1;
	clrscr();
	while(flag){
	printf("1) Push\n2)Pop\n3)Print\n4)Peek\n5)Change\n6)Seek");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			printf("\n");
			push();
			break;

		case 2:
			printf("\n");
			pop();
			break;

		case 3:
			printf("\n");
			display();
			break;

		case 4:
			peek();
			break;

		case 5:
			change();
			break;

		case 6:
			printf("\n");
			seek();
			break;

		default:
			printf("\Wrong Choice!");
			break;
	}
 printf("\nDo you want to repeat this again(0/1): ");
 scanf("%d",&flag);
 }
	getch();
	return 0;
}