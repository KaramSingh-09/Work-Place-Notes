#include<conio.h>
#include<stdio.h>

int main()
{
int i=0,n=3;
int item=10, k=2,j=n;
int A[]={1,2,3};

clrscr();
printf("The elements of array are: \n");
for( i=0;i<n;i++)
{ printf(" %d \n", A[i]);
}
n=n+1;

while(j>=k)
{
A[j+1] = A[j];
j=j-1;
}
A[k]=item;

printf("The elements of array after insertion: \n");
for(i=0;i<n;i++)
{
printf("%d \n",A[i]);
}
getch();
}
