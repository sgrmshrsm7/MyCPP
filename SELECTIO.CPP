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
void selection(int a[],int size)
{
int i,j,small,p,t;
for(i=0;i<size-1;i++)
{
small=a[i];
p=i;
for(j=i+1;j<size;j++)
if(a[j]<small)
{
small=a[j];
p=j;
}
t=a[i];
a[i]=a[p];
a[p]=t;
}

}
void main()
{
clrscr();
int a[5],i;
for(i=0;i<5;i++)
cin>>a[i];
selection(a,5);
cout<<endl<<endl<<"  Sorted array is :"<<endl<<endl<<endl<<"   | ";
for(i=0;i<5;i++)
cout<<a[i]<<" | ";

getch();
}