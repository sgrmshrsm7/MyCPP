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

void bintohex(long int a)
{
int i,j=0,k,l,m;
char hex[80];
for(i=a;i>0;i/=10000)
{
k=i%10000;
l=k%10*pow(2,0);
k/=10;
l+=k%10*pow(2,1);
k/=10;
l+=k%10*pow(2,2);
k/=10;
l+=k%10*pow(2,3);
if(l<10)
hex[j++]=l+48;
else if(l>=10)
hex[j++]=l-10+65;
}
hex[j]='\0';
strrev(hex);
cout<<"\n\n Hexadecimal form of binary is : ";
cout<<hex;
}

void main()
{
clrscr();
long int de;
cout<<"\n\n  Enter binary no. : ";
cin>>de;
bintohex(de);
getch();
}