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
void insertion(int a[],int size)
{
int i,small=0,t,k;
for(i=1;i<size;i++)
if(a[i]<a[small])
small=i;
t=a[small];
a[small]=a[0];
a[0]=t;
for(i=1;i<size;i++)
{
t=a[i];
k=i-1;
while(a[k]>t)
{
a[k+1]=a[k];
k--;
}
a[k+1]=t;
}
}
void main()
{
clrscr();
int a[5],i;
for(i=0;i<5;i++)
cin>>a[i];
insertion(a,5);
cout<<endl<<endl<<"  Sorted array is :"<<endl<<endl<<endl<<"   | ";
for(i=0;i<5;i++)
cout<<a[i]<<" | ";

getch();
}