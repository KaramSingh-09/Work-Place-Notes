#include<iostream.h>
#include<conio.h>

// WAP to swap the numbers using call by value and call by reference//
// WAP to simulate the salary of a man using class//
// WAP to create class and calculate the area of rectangle//
// WAP to represent the operation of calculator using switch case//
void swap (int&,int&);
void main ()
{ clrscr();

int a,b;
cout<<"Enter the value of a and b";
cin>>a>>b;
swap(a,b);
cout<<" After swapping the value of a is"<< a<<endl<<"and b is"<<
b<<endl;
getch();
}
void swap( int &a,int &b)
{
int c;
c=a;
a=b;
b=c
;
}


