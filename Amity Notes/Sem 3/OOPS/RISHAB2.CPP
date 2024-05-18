#include<iostream.h>
#include<conio.h>

// WAP to swap the numbers using call by value and call by reference//
// WAP to simulate the salary of a man using class//
// WAP to create class and calculate the area of rectangle//
// WAP to represent the operation of calculator using switch case//\
class area
{
int l;
int b;
int ar;
public:
void input()
{ clrscr();
cout<<" Enter the length";
cin>>l;
cout<<" Enter the breadth";
cin>>b;
}
void cal()
{
ar=(l*b);
}
void output()
{
cout<<"Area of rectangle is"<<ar<<endl;
}
};
void main()
{
area r;
r.input();
r.cal();
r.output();
getch();
}


