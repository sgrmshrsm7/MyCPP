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
char A[80];
int i,j;
cout<<"\n\n Enter your name  :  ";
gets(A);
cout<<"\n\n Please wait";
for(i=1;i<5;++i)
{
for(double r=0;r<118888888;++r);
cout<<".";}
cout<<"\n\n Your short name is  :  "<<A[0];
for(i=0;A[i]!='\0';++i)
{
if(A[i]==' ')
{
cout<<"."<<A[i+1];
j=i;
}
}
i=j+2;
for(i=i;A[i]!='\0';++i)
{
cout<<A[i];
}
getch();
}
