#include<iostream.h>
#include<conio.h>

class measure
{
int w,h,d;

public:
measure()
{
w=1;
h=2;
d=3;
}
measure ( int a,int b,int c)
{
w=a;
h=b;
d=c;
}
measure ( measure & v)
{
w=v.w;
h=v.h;
d=v.d;
}
void volume()
{
cout<<" Volume is :"<<w*h*d;
}
};
void main()
{ clrscr();
measure r;
measure v(2,3,4);
measure r2(v);
r.volume();
v.volume();
r2.volume();
getch();
}