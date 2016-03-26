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
int ii,jj,kk;
void main()
{
clrscr();
textcolor(12);
textbackground(1);
clrscr();
char string[8];
cout<<"\n\n  Enter your string  :  ";
gets(string);


cout<<"\n\n";
int l=strlen(string),i,j,a[9],n=0,k=3,m,q;
int d=7-l+1,o;
if(l>7)
{
cout<<"Error!!!!!";
getch();
exit(0);
}

//1 to 9

for(i=0;i<9;i++)
{
a[i]=i+1;
cout<<a[i];
}
for(i=i-2;i>=0;i--)
cout<<a[i];
cout<<endl;

//Main Rangoli

for(i=7;i>=0;i--)
{
for(j=0;j<i+1;j++)
cout<<a[j];
if(a[j-1]==8)
{
cout<<" ";
goto xyz;
}
if(n==0&&j==l)
{
for(m=0;m<d;m++)
cout<<" ";
n++;
cout<<string[0];
for(;m>0;m--)
cout<<" ";
}
else if(n>0)
{
for(m=0;m<d;m++)
cout<<" ";
{{
for(o=0;o<n;o++)
cout<<string[o];
cout<<string[o];
n+=1;
o--;
for(;o>=0;o--)
cout<<string[o];
}}
for(m=0;m<d;m++)
cout<<" ";
}
else if(a[j-1]!=8)
{
for(q=0;q<k;q++)
cout<<" ";
k+=2;

}
xyz:

for(j=j-1;j>=0;j--)
{
cout<<a[j];
}
cout<<endl;
}

//half completed

for(i=1;i<8;i++)
{
if(n>1)
{
for(j=0;j<i+1;j++)
cout<<a[j];
for(m=0;m<d;m++)
cout<<" ";
for(o=0;o<n-2;o++)
cout<<string[o];
cout<<string[o];
n--;o--;
for(;o>=0;o--)
cout<<string[o];
for(m=0;m<d;m++)
cout<<" ";
for(j=j-1;j>=0;j--)
cout<<a[j];
cout<<endl;
}
}
k-=2;
int ui=l+1;
for(;ui<9;ui++)
{
for(i=0;i<ui;i++)
cout<<a[i];
for(j=0;j<k;j++)
cout<<" ";
k-=2;
for(i=i-1;i>=0;i--)
cout<<a[i];
cout<<endl;
}

//1 to 9

for(i=0;i<9;i++)
{
cout<<a[i];
}
for(i=i-2;i>=0;i--)
cout<<a[i];
cout<<endl;

//end
getch();
}