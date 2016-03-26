#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
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
int a[3][3],i,j,size=30,k,ok,small,t,l,m,n;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
cin>>a[i][j];
i=0;j=0;
for(k=0;k<size;k++)
{
if(j==3)
{j=0;i++;}
small=a[i][j];
for(ok=j;ok<3;ok++)
{
if(a[i][ok]<small)
{t=a[i][ok];
a[i][ok]=a[i][j];
a[i][j]=t;
}
small=a[i][j];
}
m=i+1;
for(;m<3;m++)
{for(n=0;n<3;n++)
{if(a[m][n]<small)
{
t=a[m][n];
a[m][n]=a[i][j];
a[i][j]=t;
}
small=a[i][j];
}
}
j++;}
cout<<endl<<endl<<"  Sorted array is :"<<endl<<endl<<endl;
for(i=0;i<3;i++)
{
cout<<"   | ";
for(j=0;j<3;j++)
cout<<setw(j+5) <<a[i][j]<<" | ";
cout<<endl<<endl;
}

getch();
}