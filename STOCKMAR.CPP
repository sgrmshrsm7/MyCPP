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
cout<<"\n\n\n\t\t\t STOCK MARKET"<<endl<<endl;
long int a[8];
int i,buy=0,b[7],s[7],kb=0,ks=0,n=0;
for(i=0;i<8;i++)
a[i]=0;
for(i=0;i<7;i++)
{
cout<<" Day "<<i<<" : ";
cin>>a[i];
}
for(i=0;i<7;i++)
{
if(a[i]<a[i+1]&&buy==0)
{
b[kb]=i;
kb++;
buy++;
}
else if(buy==1)
{
if(a[i]>=a[i-1]&&a[i]>=a[i+1])
{
s[ks]=i;
ks++;
n++;
buy--;
}
}
}
for(i=0;i<n;i++)
{
cout<<"\n Buy on day : "<<b[i]<<" Sell on day : "<<s[i]<<endl;
}
getch();
}