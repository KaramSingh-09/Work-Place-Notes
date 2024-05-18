// WAP to swap two numbers//
//Write a template function that returns the avg of all the elements of an array using a template to the function should be the array name and the size of the array//

#include<iostream.h>
#include<conio.h>
template<class t1,class t2>
void swap(t1 x,t2 y)
{
t1 z;
z=x;
x=y;
y=z;
cout<<"After Swapping x="<<x<<"and y="<<y;
}
void main()
{
clrscr();
swap(2,3);
swap(1.22,2.33);
getch();
}