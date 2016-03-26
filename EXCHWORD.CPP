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

void exch(char s1[],char s2[],char s3[])
{
int i,j,k,m;
int l1=strlen(s1);
int l2=strlen(s2);
for(i=0;i<l1-l2;i++)
{
if(s1[i]==s2[0])
{
j=i;
for(k=0;k<l2;k++)
{
if(s1[i]==s2[k])
m=0;
else
{
m=1;
break;
}
}
if(m==0)
{
k=0;
for(j=i;j<l2+i;j++)
{
s1[j]=s3[k];
k++;
}
}
}
}
cout<<s1;
}

void main()
{
clrscr();
char a1[80],a2[80],a3[80];
cout<<"\n\n  Enter main sentence  :  ";
gets(a1);
cout<<"\n  Enter word in string  :  ";
gets(a2);
cout<<"\n  Enter new word  :  ";
gets(a3);
cout<<"\n\n New string is  :  ";
exch(a1,a2,a3);
getch();
}