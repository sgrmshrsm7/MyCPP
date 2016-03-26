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

int neon(int a[],int l)
{
int c=0,i,s,j,n;
for(i=0;i<l;i++)
{
s=0;
int m=a[i];
n=(m*m);
for(j=n;j>0;j/=10)
s+=(j%10);
if(s==a[i])
c++;
}
return c;
}

void main()
{
clrscr();
int n[5],s=5,i;
for(i=0;i<s;i++)
{
cin>>n[i];
}
int c=neon(n,s);
cout<<"\n\n  No. of neon number is  :  "<<c;
getch();
}