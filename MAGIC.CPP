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
void main()
{
clrscr();
int num,i,j;
cout<<"\n\n\n  \t Enter any number  :   ";
cin>>num;
int sod=0;
for(i=num;i>9;i=sod)
{
sod=0;
for(j=i;j!=0;j/=10)
sod+=j%10;
}
if(i==1)
cout<<"\n\n\n\t It is a magic number";
else
cout<<"\n\n\n\t It is not a magic number";
getch();
}