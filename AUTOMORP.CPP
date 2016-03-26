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

int count(int a[],int size)
{
int i,c=0,d,n,sn;
for(i=0;i<size;i++)
{
d=10;
n=a[i];
sn=n*n;
while(d<n)
d*=10;
if(sn%d==n)
c++;
}
return c;
}

void main()
{
clrscr();
int a[5],s=5,i;
for(i=0;i<s;i++)
cin>>a[i];
int c=count(a,s);
cout<<"\n\n  No. of automorphic no. is  :  "<<c;
getch();
}