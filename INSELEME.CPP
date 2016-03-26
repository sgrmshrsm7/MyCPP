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

void insert(int a[],int s,int pos,int e)
{
int i;
for(i=s-2;i>pos-1;i--)
a[i+1]=a[i];
a[pos]=e;
}
void main()
{
clrscr();
int a[10],size=10,e,p,i;
for(i=0;i<size-1;i++)
cin>>a[i];
cout<<"\n\n Enter element  :  ";
cin>>e;
cout<<"\n Enter position  :  ";
cin>>p;
insert(a,size,p,e);
cout<<"\n\n New array is :";
cout<<"\n\n  | ";
for(i=0;i<size;i++)
cout<<a[i]<<" | ";
getch();
}