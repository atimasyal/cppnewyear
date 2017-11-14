//ATIMA SYAL
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void f1(char c,int n,int col)
{  textcolor(col+128);
   for(int i=1;i<=n;i++)
   cprintf("%c",c);
}
void f2(char c,int n,int col)
{  textcolor(col);
   for(int i=1;i<=n;i++)
   cprintf("%c",c);
}
void f1(char c,int n)
{  for(int i=1;i<=n;i++)
   cout<<c;
}
void main()
{  clrscr();
   int a=5,i;
   long int j;
   f1('\n',5);
   f1(' ',15);
   f1('_',10,a);
   f1(' ',9);
   f1('_',10,a);
   f1(' ',9);
   f1('_',10,a);
   f1('\n',1);
   f1(' ',15);
   f1('|',1,a);
   f1(' ',2);
   cout<<"HAPPY ";
   f1('|',1,a);
   f1(' ',9);
   f1('|',1,a);
   f1(' ',2);
   cout<<"NEW   ";
   f1('|',1,a);
   f1(' ',9);
   f1('|',1,a);
   f1(' ',2);
   cout<<"YEAR  ";
   f1('|',1,a);
   f1('\n',1);
   f1(' ',15);
   f1('|',1,a);
   f1('_',8,a);
   f1('|',1,a);
   f1(' ',9);
   f1('|',1,a);
   f1('_',8,a);
   f1('|',1,a);
   f1(' ',9);
   f1('|',1,a);
   f1('_',8,a);
   f1('|',1,a);
   getch();
   for(i=0;i<30;i+=4)
   {  clrscr();
      f1('\n',5);
      f1(' ',i);
      f2('_',10,a);
      f1(' ',9);
      f2('_',10,a);
      f1(' ',9);
      f2('_',10,a);
      f1('\n',1);
      f1(' ',i);
      f2('|',1,a);
      f1(' ',2);
      cout<<"HAPPY ";
      f2('|',1,a);
      f2('_',9,a+1);
      f2('|',1,a);
      f1(' ',2);
      cout<<"NEW   ";
      f2('|',1,a);
      f2('_',9,a+1);
      f2('|',1,a);
      f1(' ',2);
      cout<<"YEAR  ";
      f2('|',1,a);
      f1('\n',1);
      f1(' ',i);
      f2('|',1,a);
      f2('_',8,a);
      f2('|',1,a);
      f1(' ',9);
      f2('|',1,a);
      f2('_',8,a);
      f2('|',1,a);
      f1(' ',9);
      f2('|',1,a);
      f2('_',8,a);
      f2('|',1,a);
      f1('\n',1);
      f1(' ',i+2);
      f2('O',1,a+3);
      f1(' ',4);
      f2('O',1,a+3);
      f1(' ',13);
      f2('O',1,a+3);
      f1(' ',4);
      f2('O',1,a+3);
      f1(' ',13);
      f2('O',1,a+3);
      f1(' ',4);
      f2('O',1,a+3);
      for(j=0;j<4000000;j++);
   }
   getch();
}

