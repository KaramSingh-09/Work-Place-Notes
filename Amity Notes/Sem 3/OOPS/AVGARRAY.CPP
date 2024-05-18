#include<conio.h>
#include<iostream.h>
template<class t>
void getdata(t a[],int x)
{
t i;
for(i=0;i<4;i++)
{
cout<<"enter values of array";
cin>>a[i];
}
}
template<class t>
void showdata(t a[],int x)
{
t i,sum=0,avg=0;
for(i=0;i<4;i++)
{
sum=sum+a[i];
avg=sum/4;
}
cout<<"average="<<avg<<endl;
}
void main()
{ clrscr();
float a[4];
getdata(a,4);
showdata(a,4);
getch();
}
