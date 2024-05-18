#include<iostream.h>
#include<conio.h>
class interest
{       float s,p,r,t;
	public:
	interest()
{
r=0.05;
p=1000;
t=10;
}
friend void calculate(interest);
};
void calculate(interest obj)
{ float s,p,r,t;
obj.s=(obj.p*obj.r*obj.t);
cout<<" Simple Interest is"<<obj.s;
}

void main()
{ clrscr();
interest obj;
calculate(obj);
getch();

}