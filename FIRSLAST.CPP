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

void cat(char a[])
{
int i,sp,j=0,c=0,k;
char word[80],w[80];
for(i=0;a[i]!='\0';i++)
if(a[i]==' ')
sp++;
for(i=0;a[i]!=' ';i++)
word[j++]=a[i];
word[j]='\0';
j=0;
for(i=strlen(a)-1;a[i]!=' ';i--)
w[j++]=a[i];
w[j]='\0';
strrev(w);
strcat(word,w);

cout<<"\n\n  New word formed is : "<<word;
}
void main()
{
clrscr();
char a[80];
cout<<"\n\n\n Enter any string : ";
gets(a);
cat(a);
getch();
}