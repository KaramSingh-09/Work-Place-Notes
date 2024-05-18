#include<stdio.h>
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
void display(){
struct node *t=top;
while(t!=NULL){
printf("%d",t->data);
t=t->next;
}
}
void insert(){
int data;
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter the data \n");
scanf("%d",&data);
temp->data=data;
temp->next=NULL;
if(top==NULL) top=temp;
else{
struct node *t=top;
while(t->next!=NULL)t=t->next;
t->next=temp;
}
}
void main ()
{int ch,ch1=1;
 clrscr();

while(ch1==1)
{
printf("\n 1.Insert in list \n");
printf("2.Display list \n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:display();
break;

}
printf("Continue \n");
scanf("%d",&ch1);

}
}
