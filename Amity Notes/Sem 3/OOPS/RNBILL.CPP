#include<iostream.h>
#include<conio.h>
class product
{
int id,q;
char name[20];
float uprice,total;
public:
void input()
{
cout<<"Please enter the product name:";
cin>>name;
cout<<"Please enter the product ID:";
cin>>id;
cout<<"Please enter the quantity:";
cin>>q;
cout<<"Please enter the unit price:";
cin>>uprice;
}
void bill()
{
total=q*uprice;
cout<<"total amount payable is:"<<total;
}
void output()
{
cout<<" Product ID:"<<id;
cout<<" Product Name:"<<name;
cout<<" Product Quantity:"<<q;
cout<<" Unit Price:"<<uprice;
bill();
}
};
void main()
{ clrscr();
product p;
product p1;
product p2;
product p3;
product p4;
p.input();
p.output();
p1.input();
p1.output();
p2.input();
p2.output();
p3.input();
p3.output();
p4.input();
p4.output();
getch();
}