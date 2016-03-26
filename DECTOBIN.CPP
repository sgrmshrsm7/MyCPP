#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
#include<dos.h>
#include<graphics.h>

int dectobin(int a)
{
int i,bin=0,num=0;
for(i=a;i!=0;i/=2)
{
if(i%2!=0)
bin=(bin*10)+(i%2);
else
bin=bin*10+2;
}
for(i=bin;i!=0;i/=10)
{
if(i%10!=2)
num=(num*10)+(i%10);
else
num=num*10;
}
return num;
}

void main()
{
clrscr();
int a;
cout<<"\n\n\n  Enter decimal no.  :  ";
cin>>a;
int b=dectobin(a);
cout<<"\n\n  Its binary form is  :  "<<b;
getch();
}