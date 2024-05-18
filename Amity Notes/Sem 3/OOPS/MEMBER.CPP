#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class second;
class first
{
int x;
public:
first()
{
x=50;
}
void display(second);
};

class second
{
int y;
public:
second()
{
y=10;
}
friend void first::display(second);
};
 void first::display(second obs)
 {
  cout<<"x =  "<<obs.y;
  }

  void main()
  {clrscr();
  first o;
  second ob;
  o.display(ob);
  getch();
  }