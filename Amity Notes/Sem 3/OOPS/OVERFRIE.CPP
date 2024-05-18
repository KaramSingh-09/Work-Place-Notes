#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class demo
{
int value;
public:
demo()
{
value=0;
}
void getdata()
{
cin>>value;
}
friend demo operator +(demo,demo)
void display()
{
cout<<value;
}
};
demo operator + (demo obj1,demo obj2)
{
demo temp;
temp.value=obj1.value+obj2.value;
return temp;
}
void main()
  {
  clrscr();
  demo obj1,obj2,obj3;
  obj1.getdata();
  obj2.getdata();
  obj3=obj1+obj2;
  obj3.display();
  getch();
  }