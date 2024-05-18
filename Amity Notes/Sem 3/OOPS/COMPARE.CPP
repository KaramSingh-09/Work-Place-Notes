#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
enum boolean{false,true};
class String
{
  char str[100];
  int i;
  int flag;
 public:
  String()
  {
   strcpy(str," ");
  }
  String(char s[])
  {
   strcpy(str,s);
  }
  void getstring()
   {
   cout<<"Enter the string\n";
   gets(str);
  }

  void display()
  {
   puts(str);
  }
  boolean operator == (String S2)
  {
   if(strlen(str)==strlen(S2.str))
   {
   for(i=0; i<strlen(str); i++)
   {
   if(str[i]==S2.str[i])
   flag=0;
   else
   {
   flag=1;
   break;
   }
   }
    if(flag==0)
    return false;
  else
    return true;

  }}
};
void main()
{
 clrscr();
 String S1="BYE";
 String S2="AYE";
 //S1.getstring();
 S1.display();
 S2.display();
 if(S1==S2)
 cout<<"Strings are not same";
 else
 cout<<"Strings are same";
}


