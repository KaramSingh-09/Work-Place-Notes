#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class demo
{
int value;
public:
demo()
{
value=5;
}
demo operator +(demo &obj)
{
demo temp;
temp.value=value+obj.value;
return temp;
}
void display()
{
cout<<value;
}
};
void main()
  {
  clrscr();
  demo a,b,c;
  c=a+b;
  c.display();
  getch();
  }